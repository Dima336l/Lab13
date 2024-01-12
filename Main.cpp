#include "Main.h"

int main() {
  try {
    Date* date = new Date(1,12,2000);
    Date* date2 = new Date(5,12,2000);
    cout << "Day: " << date->getDay() << endl;
    cout << "Month: " << date->getMonth() << endl;
    cout << "Year: " << date->getYear() << endl;
    bool areDatesEqual = *date == *date2;
    bool areDatesDifferent = *date != *date2;
    bool isDate2Bigger = *date2 > *date;
    bool isDate2Smaller = *date2 < *date;
    cout << boolalpha;
    cout << "The result of equality " << areDatesEqual << endl;
    cout << "The result of inequality " << areDatesDifferent << endl;
    cout << "The result of greater than " << isDate2Bigger << endl;
    cout << "The result of less than " << isDate2Smaller << endl;
    cout << "Displaying date1: " ;
    date->displayDate();
    cout << "Displaying date2: ";
    date2->displayDate();
    delete date;
    delete date2;
  } catch (const std::invalid_argument& e) {
    cerr << e.what() << endl;
  }
}
