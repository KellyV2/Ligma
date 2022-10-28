#pragma once

class Employee{
 protected:
  int payRate;
  float energyLevel;
 public:
  Employee();
  Employee(int payRate);
  void takeABreak(int mins);
  virtual void work(int mins) = 0;
  virtual float pay() = 0;
  int get_payRate(){return payRate;}
  float get_energyLevel(){return energyLevel;}
  void set_payRate(int n_rate){payRate = n_rate;}
  void set_energyLevel(float n_energy){energyLevel = n_energy;}
};
