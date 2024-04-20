#include "HealthProfile.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
  string lastName, firstName, gender, month;
  int day, year, height, weight;
  cout << "Enter last name" << endl;
  cin >> lastName;
  cout << "Enter first name " << endl;
  cin >> firstName;
  cout << "Enter gender" << endl;
  cin >> gender;
  cout << "Month of birth" << endl;
  cin >> month;
  cout << "Day pf birth" << endl;
  cin >> day;
  cout << "Year of birth" << endl;
  cin >> year;
  cout << "Enter height" << endl;
  cin >> height;
  cout << "Enter weight" << endl;
  cin >> weight;
  HealthProfile myHealthProfile(firstName, lastName, gender, day, month, year,
                                height, weight);

  myHealthProfile.displayTargetHeartRate();
  myHealthProfile.displayBMI();
  myHealthProfile.displayDate();

  return 0;
}
