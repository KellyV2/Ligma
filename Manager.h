#pragma once
#include "Employee.h"

class Manager : public Employee{
 private:
  int daysWorked;
  float hoursWorked, timeCount;
 public:
  Manager();
  Manager(int payRate);
  float get_hoursWorked() {return timeCount/60;}
  void set_hoursWorked(float Hours) {hoursWorked = Hours;}
  int get_daysWorked() {return daysWorked;}
  void set_daysWorked(int Days) {daysWorked = Days;}
  void work(int mins);
  float pay();
};
