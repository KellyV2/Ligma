#pragma once
#include "Employee.h"

using namespace std;

class Casual : public Employee{
 private:
  int dayCount;
  float hoursWorked[7], timeCount;
 public:
  Casual();
  Casual(int payRate);
  void endWorkDay();
  int get_dayCount() {return dayCount;}
  void set_dayCount(int n_day) {dayCount = n_day;}
  void work(int mins);
  float pay();
};
