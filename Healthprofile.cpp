#include "HealthProfile.h"
#include <iostream>
#include <string>
using namespace std;

HealthProfile::HealthProfile(string fname, string lname, string gender, int day,
                             string month, int year, int height, int weight) {
  setFirstName(fname);
  setLastName(lname);
  setGender(gender);
  setDay(day);
  setMonth(month);
  setYear(year);
  setHeight(height);
  setWeight(weight);
}
void HealthProfile::setFirstName(string fname) { firstName = fname; }
string HealthProfile::getFirstName() { return firstName; }
void HealthProfile::displayFirstName() { cout << getFirstName() << endl; }

// methods of last name
void HealthProfile::setLastName(string lname) { lastName = lname; }
string HealthProfile::getLastName() { return lastName; }
void HealthProfile::displayLastName() { cout << getLastName() << endl; }

// methods of gender
void HealthProfile::setGender(string gender_in) { gender = gender_in; }
string HealthProfile::getGender() { return gender; }
void HealthProfile::displayGender() { cout << getGender() << endl; }

// methods of day
void HealthProfile::setDay(int day_in) { day = day_in; }
int HealthProfile::getDay() { return day; }
void HealthProfile::displayDay() { cout << getDay() << endl; }

// methods of month
void HealthProfile::setMonth(string month_in) { month = month_in; }
string HealthProfile::getMonth() { return month; }
void HealthProfile::displayMonth() { cout << getMonth() << endl; }

// methods of year
void HealthProfile::setYear(int year_in) { year = year_in; }
int HealthProfile::getYear() { return year; }
void HealthProfile::displayYear() { cout << getYear() << endl; }

// methods date
void HealthProfile::setDate(int day, string month, int year) {
  date = to_string(day) + "-" + month + "-" + to_string(year);
}
string HealthProfile::getDate() {
  date = to_string(getDay()) + "-" + getMonth() + "-" + to_string(getYear());
  return date;
}
void HealthProfile::displayDate() { cout << getDate() << endl; }

// methods for height
void HealthProfile::setHeight(int height_in) { height = height_in; }
int HealthProfile::getHeight() { return height; }
void HealthProfile::displayHeight() { cout << getHeight() << endl; }

// methods for weight
void HealthProfile::setWeight(int weight_in) { weight = weight_in; }
int HealthProfile::getWeight() { return weight; }
void HealthProfile::displayWeight() { cout << getWeight() << endl; }

// methods for BMI
int HealthProfile::getBMI() { return weight / (height * height); }
void HealthProfile::displayBMI() { cout << getBMI() << endl; }

// methods for heart
int HealthProfile::getHeartRate() { return 220 - (getYear() - 2024); }
void HealthProfile::displayHeartRate() { cout << getHeartRate() << endl; }

int HealthProfile::getTargetHeartRate() {
  return (220 - (getYear() - 2024) * (0.5));
}
void HealthProfile::displayTargetHeartRate() {
  cout << getTargetHeartRate() << endl;
}
