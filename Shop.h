#pragma once
#include "Employee.h"
#include "Casual.h"
#include "Manager.h"

class Shop{
 private:
  Employee** employees;
  int count;
  Shop();
 public:
  void addEmployee(Employee *employee);
  Employee **get_employees() {return employees;};
  int get_count() {return count;};
  static Shop* createShop(int authority) {
    if (authority == 10){
      Shop* newShop = new Shop();
      return newShop;
    } else {
      return NULL;
    }
  };
};
