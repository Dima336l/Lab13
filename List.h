#ifndef LIST_H
#define LIST_H

using namespace std;
#include <stdexcept>
#include <cstddef>
#include <iostream>
#include <vector>

template <typename T>

class List {
private:
  vector <T> data;
  int currentSize;
  int MaxSize;
public:
  List();
  void add (const T& item);
  T get (size_t i) const;
  void remove(size_t i);
  size_t size() const;
  template <typename U>
  friend std::ostream& operator<<(std::ostream& out, const List<U>& list);
};

#endif
