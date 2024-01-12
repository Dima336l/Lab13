#ifndef LIST_H
#define LIST_H

using namespace std;

template <typename T>

class List {
 private:
  const int max_size = 100;
  T data[max_size];
  size_t currentSize;
 public:
  void add (const T& item);
  T get (size_t i) const;
  void remove(size_t i);
  size_t size() const;
}




#endif
