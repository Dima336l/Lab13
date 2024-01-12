#ifndef DATE_H
#define DATE_H

using namespace std;

#include <iostream>
#include <string>

class Date {
 private:
  int day;
  int month;
  int year;
  bool isValidDate(int d, int m, int y);
  int daysInMonth(int m, int y);
  bool isLeapYear(int y);
 public:
  Date(int d, int m, int y);
  bool operator==(const Date& other);
  bool operator>(const Date& other);
  bool operator<(const Date& other);
  bool operator!=(const Date& other);
  int getDay() const;
  int getMonth() const;
  int getYear() const;
  void displayDate();
};

  
#endif
