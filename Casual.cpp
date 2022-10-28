#include "Casual.h"

using namespace std;

Casual::Casual() {

}

Casual::Casual(int payRate) : Employee(payRate) {
  for (int i = 0; i < 7; i++) {
    hoursWorked[i] = 0;
  }
  dayCount = 0;
  timeCount = 0;
}

void Casual::endWorkDay() {
  energyLevel = 100;
  timeCount = 0;
  if (dayCount == 7) {
    dayCount = 0;
  } else {
    dayCount++;
  }
}

void Casual::work(int mins) {
  for (int i = 0; i < mins; i++) {
    if (energyLevel >= 0.5) {
      energyLevel -= 0.05;
      timeCount++;
    }
    if (dayCount <= 5) {
      hoursWorked[dayCount] = timeCount/60;
    } else {
      hoursWorked[dayCount] = timeCount/15;
    }
  }
}

float Casual::pay() {
  float totalWorked = 0;
  for (int i = 0; i < 7; i++) {
    totalWorked += hoursWorked[i];
    hoursWorked[i] = 0;
  }
  dayCount = 0;
  return totalWorked * payRate;
}