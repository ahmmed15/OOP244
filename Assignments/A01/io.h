/* Citation and Sources...
-----------------------------------------------------------
Assignment 1
Module: io
Filename: io.h
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

#ifndef SENECA_IO_H
#define SENECA_IO_H

#include <cstdio>

namespace seneca {

   struct PhoneRec {
      char name[16];
      char lastname[26];
      long long phoneNumber;
   };

   void read(char* name);

   void print(long long phoneNumber);

   void print(const PhoneRec& pr,
              size_t& row,
              const char* filter = nullptr);

   bool read(PhoneRec& pr, FILE* fptr);

   void print(PhoneRec* pr[],
              size_t size,
              const char* filter = nullptr);

   void setPointers(PhoneRec* ptrs[],
                    PhoneRec recs[],
                    size_t size);

   void sort(PhoneRec* ptrs[],
             size_t size,
             bool sortByLastname);

}

#endif