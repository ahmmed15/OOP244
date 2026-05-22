/* Citation and Sources...
-----------------------------------------------------------
Lab 1 - Function Overloading and References
Module: Time
Filename: Time.cpp
-----------------------------------------------------------
Author: Rasel Ahmed
Student number: 182801233
Email: rahmmed@myseneca.ca
Subject: OOP244NRA
-----------------------------------------------------------
Revision History
-----------------------------------------------------------
Version Date      Reason
V1.0    2026/05/15  Completed Lab 1
-----------------------------------------------------------
I have done all the coding by myself and only used
the lab instructions provided by the professor on
Blackboard for Lab 1.
-----------------------------------------------------------
*/


#include <iostream>
#include "Time.h"

using namespace std;

namespace seneca {

   void set(Time& time, int hours, int minutes) {
      time.hours = hours;
      time.minutes = minutes;
 }
void set(Time& time, int totalMinutes) {
      time.hours = totalMinutes / 60;
      time.minutes = totalMinutes % 60;
 }

void add(Time& time, int minutes) {
      int total = time.hours * 60 + time.minutes + minutes;

      
      set(time, total);
 }

void add(Time& destination, const Time& source) {
      int totalMinutes = source.hours * 60 + source.minutes;

     
      add(destination, totalMinutes);
 }
 void display(const Time& time) {
      cout << time.hours << ":" << time.minutes;
 }

void display(const Time& time, const char* label) {
      cout << label << ": ";

      
  display(time);
 }

}