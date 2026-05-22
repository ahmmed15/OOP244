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

#ifndef SENECA_TIME_H
#define SENECA_TIME_H

namespace seneca {

   struct Time {
      int hours;
      int minutes;
   };

   void set(Time& time, int hours, int minutes);
   void set(Time& time, int totalMinutes);

   void add(Time& time, int minutes);
   void add(Time& destination, const Time& source);

   void display(const Time& time);
   void display(const Time& time, const char* label);

}

#endif
