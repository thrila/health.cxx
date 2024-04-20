#include <string>
using namespace std;

class HealthProfile {
private:
  string firstName;
  string lastName;
  string gender;
  int day;
  string month;
  int year;
  string date;
  int height;
  int weight;

public:
  // constructor
  HealthProfile(string, string, string, int, string, int, int, int);

  // methods for firstName
  void setFirstName(string);
  string getFirstName();
  void displayFirstName();

  // methods for lastName
  void setLastName(string);
  string getLastName();
  void displayLastName();

  // methods for gender
  void setGender(string);
  string getGender();
  void displayGender();

  // methods for day
  void setDay(int);
  int getDay();
  void displayDay();

  // methods for month
  void setMonth(string);
  string getMonth();
  void displayMonth();

  // methods for year
  void setYear(int);
  int getYear();
  void displayYear();

  // methods for date
  void setDate(int, string, int);
  string getDate();
  void displayDate();

  // methods for height
  void setHeight(int);
  int getHeight();
  void displayHeight();

  // methods for weight
  void setWeight(int);
  int getWeight();
  void displayWeight();

  // methods for BMI
  void displayBMI();
  int getBMI();

  // methods for heart rate
  void displayHeartRate();
  int getHeartRate();
  void displayTargetHeartRate();
  int getTargetHeartRate();
};

// first name
// last name
// gender
// date of birth
// height
// weight
// BMI
// heart rate
// target heart rate range
//
