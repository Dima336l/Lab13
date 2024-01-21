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

  std::cout << std::endl;
  List<int,5> intList;
  intList.add(10);
  intList.add(30);
  intList.add(33);
  intList.remove(0);
  std::cout << "List size: " << intList.size() << std::endl;
  std::cout << "Value at index 0: " << intList.get(0) << std::endl;
  std::cout << "Printing the list: " << intList << std::endl;
  
  List<std::string,5> strList;
  strList.add("Dima");
  strList.add("Andrei");
  strList.add("Vanea");
  strList.remove(0);
  std::cout << "List size: " << strList.size() << std::endl;
  std::cout << "Value at index 0: " << strList.get(0) << std::endl;
  std::cout << "Printing the list: " << strList << std::endl;

  List<float,5> floatList;
  floatList.add(1.5f);
  floatList.add(2.5f);
  floatList.add(3.5f);
  floatList.remove(0);
  std::cout << "List size: " << floatList.size() << std::endl;
  std::cout << "Value at index 0: " << floatList.get(0) << std::endl;
  std::cout << "Printing the list: " << floatList << std::endl;

  List<double,5> doubleList;
  doubleList.add(1.2);
  doubleList.add(2.2);
  doubleList.add(3.3);
  doubleList.remove(0);
  std::cout << "List size: " << doubleList.size() << std::endl;
  std::cout << "Value at index 0: " << doubleList.get(0) << std::endl;
  std::cout << "Printing the list: " << doubleList << std::endl;

  List<int, 10> intList1;
  std::cout << "Int List before modification: " << intList1 << std::endl;
  for (int i = 0; i < 10; i++) {
    intList1.add(i*i);
  }
  intList1.remove(3);
  std::cout << "Int List after modification: " << intList1 << std::endl << std::endl;

  try {
    std::cout << "Testing [] operator: " << intList1[8] << std::endl;
    std::cout << "Testing [] operator: " << intList1[10] << std::endl;
  } catch (const std::out_of_range& e) {
    std::cerr << e.what() << std::endl;
  }
}
