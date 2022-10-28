#include "Manager.h"

Manager::Manager(int payRate) : Employee(payRate){
  daysWorked = 0;
  hoursWorked = 0;
  timeCount = 0;
}

void Manager::work(int mins){
  for (int i = 0; i < mins; i++){
    if (energyLevel >= 0.25 && timeCount < 480) {
      energyLevel = energyLevel - 0.25;
      hoursWorked = hoursWorked + 1/60;
      timeCount++;
    }
  }
  if (time_count >= 480){
    daysWorked++;
    hoursWorked = 0;
    energyLevel = 100;
    timeCount = 0;
  }
}

float Manager::pay(){
  float pay = daysWorked * 8 * payRate;
  daysWorked = 0;
  hoursWorked = 0;
  timeCount = 0;
  return pay;
}
