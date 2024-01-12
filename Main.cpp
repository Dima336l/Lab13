#include "Main.h"

int main() {
  try {
    Date* date = new Date(1,12,2000);
    Date* date2 = new Date(1,12,2000);
    cout << "Day: " << date->getDay() << endl;
    cout << "Month: " << date->getMonth() << endl;
    cout << "Year: " << date->getYear() << endl;
    delete date;
  } catch (const std::invalid_argument& e) {
    cerr << e.what() << endl;
  }
}
