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
  void set_hoursWorked(float s_hours){hoursWorked = s_hours;}
  int get_daysWorked() {return daysWorked;}
  void set_daysWorked(int s_days) {daysWorked = s_days;}
  void work(int mins);
  float pay();
};
