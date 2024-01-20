#ifndef LIST_H
#define LIST_H

using namespace std;
#include <stdexcept>
#include <cstddef>
#include <iostream>
#include <vector>

template <typename T, long unsigned int sizeMax = 10>

class List {
private:
  vector <T> data;
  size_t currentSize;
public:
  List() : data(sizeMax), currentSize(0) {
  }
  template<typename U>
  void add(const U& item) {
    if (currentSize < sizeMax) {
      data.at(currentSize) = item;
      currentSize++;
    } else {
      throw std::out_of_range("List is full");
    }
  }
  void remove(size_t i) {
    data.erase(data.begin() + i);
  }

  T get(size_t i) const {
    return data.at(i);
  }

  
  size_t size() const {
    return data.size();
  }
  friend std::ostream& operator<<(std::ostream& os, const List<T,sizeMax>& list) {
    os << "[";
    long unsigned int listSize = list.data.size();
    for (long unsigned int i = 0; i < listSize - 1; i++) {
      os << list.data.at(i) << " ";
    }
    os << list.data.at(listSize - 1) << "]" << std::endl;
    return os;
  }
  
};


#endif
