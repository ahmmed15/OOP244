/* Citation and Sources...
-----------------------------------------------------------
Assignment 1
Module: io
Filename: io.cpp
-----------------------------------------------------------
Author: Rahmmed
Student number: 182801233
Email: rahmmed@myseneca.ca
Subject: OOP244NAA
-----------------------------------------------------------
Revision History
-----------------------------------------------------------
Version Date      Reason
V1.0    2026/05/16  Ready for submission
-----------------------------------------------------------
Done all the work by myself apart from sort function.
Copied the code provided by class notes / professor for sort function.
-----------------------------------------------------------
*/

#include <iostream>
#include <cstdio>
#include "io.h"
#include "cstr.h"

using namespace std;

namespace seneca {

   void read(char* name) {
      cout << "name>\n ";
      cin >> name;
   }

   void print(long long phoneNumber) {

      long long area = phoneNumber / 10000000;
      long long first = (phoneNumber / 10000) % 1000;
      long long last = phoneNumber % 10000;

      cout << "(" << area << ") ";

      cout.width(3);
      cout.fill('0');
      cout << first << "-";

      cout.width(4);
      cout.fill('0');
      cout << last;
   }

   void print(const PhoneRec& pr,
              size_t& row,
              const char* filter) {

      bool ok = false;

      if (filter == nullptr) {
         ok = true;
      }
      else if (strstr(pr.name, filter) ||
               strstr(pr.lastname, filter)) {
         ok = true;
      }

      if (ok) {

         cout << row << ": "
              << pr.name << " "
              << pr.lastname << " ";

         print(pr.phoneNumber);

         cout << endl;

         row++;
      }
   }

   bool read(PhoneRec& pr, FILE* fptr) {

      return fscanf(fptr,
                    "%s %s %lld",
                    pr.name,
                    pr.lastname,
                    &pr.phoneNumber) == 3;
   }

   void print(PhoneRec* pr[],
              size_t size,
              const char* filter) {

      size_t row = 1;

      for (size_t i = 0; i < size; i++) {
         print(*pr[i], row, filter);
      }
   }

   void setPointers(PhoneRec* ptrs[],
                    PhoneRec recs[],
                    size_t size) {

      for (size_t i = 0; i < size; i++) {
         ptrs[i] = &recs[i];
      }
   }

   void sort(PhoneRec* ptrs[],
             size_t size,
             bool sortByLastname) {

      for (size_t i = 0; i < size - 1; i++) {

         for (size_t j = i + 1; j < size; j++) {

            bool swapNeeded = false;

            if (sortByLastname) {

               if (strcmp(ptrs[i]->lastname,
                          ptrs[j]->lastname) > 0) {
                  swapNeeded = true;
               }

            }
            else {

               if (strcmp(ptrs[i]->name,
                          ptrs[j]->name) > 0) {
                  swapNeeded = true;
               }
            }

            if (swapNeeded) {

               PhoneRec* temp = ptrs[i];
               ptrs[i] = ptrs[j];
               ptrs[j] = temp;
            }
         }
      }
   }

}