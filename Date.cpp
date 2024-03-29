#include "Date.h"

Date::Date(int d, int m, int y) {
  if (!Date::isValidDate(d,m,y)) {
    throw std::invalid_argument("Invalid date values");
  }
  day = d;
  month = m;
  year = y;
}

int Date::getDay() const {
  return day;
}

int Date::getMonth() const {
  return month;
}

int Date::getYear() const {
  return year;
}

bool Date::isValidDate(int d, int m, int y) {
  if (y < 0 || m < 1 || m > 12 || d < 1 || d > Date::daysInMonth(m,y)) {
    return false;
  }
  return true;
}

int Date::daysInMonth(int m, int y) {
  const int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int daysInMonth = days[m];
  if (m == 2 && Date::isLeapYear(y)) {
    daysInMonth = 29;
  }
  return daysInMonth;
}

bool Date::isLeapYear(int y) {
  return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

bool Date::operator==(const Date& other) {
  return ((day == other.getDay() && (month == other.getMonth()) && (year == other.getYear())));
}

bool Date::operator!=(const Date& other) {
  return ((day != other.getDay() || (month != other.getMonth()) || (year != other.getYear())));
}

bool Date::operator>(const Date& other) {
  return ((year > other.getYear()) ||
	  (year == other.getYear() && month > other.getMonth()) ||
	  (year == other.getYear() && month == other.getMonth() && day > other.getDay()));
}

bool Date::operator<(const Date& other) {
  return ((year < other.getYear()) ||
	  (year == other.getYear() && month < other.getMonth()) ||
	  (year == other.getYear() && month == other.getMonth() && day < other.getDay()));
}

void Date::displayDate() {
  cout << "(" << day << ", " << month << ", " << year << ")" << endl;
}
