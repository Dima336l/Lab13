#include "List.h"


template <typename T>
List<T>::List() {
  MaxSize = 100;
}

template List<int>::List();
template List<std::string>::List();
template List<float>::List();
template List<double>::List();

template <typename T>
std::ostream& operator<<(std::ostream& os, const List<T>& list) {
    os << "[";
    long unsigned int listSize = list.data.size();
    for (long unsigned int i = 0; i < listSize - 1; i++) {
        os << list.data.at(i) << " ";
    }
    os << list.data.at(listSize - 1) << "]" << std::endl;
    return os;
}

template std::ostream& operator<<(std::ostream& os, const List<int>& list);
template std::ostream& operator<<(std::ostream& os, const List<std::string>& list);
template std::ostream& operator<<(std::ostream& os, const List<double>& list);
template std::ostream& operator<<(std::ostream& os, const List<float>& list);

template <typename T>
void List<T>::add(const T& item) {
  if (currentSize < MaxSize) {
    data.push_back(item);
    currentSize++;
  } else {
    throw std::out_of_range("List is full");
  }
}

template void List<int>::add(const int&);
template void List<std::string>::add(const std::string&);
template void List<float>::add(const float&);
template void List<double>::add(const double&);

template <typename T>
T List<T>::get(size_t i) const {
  return data.at(i);
}

template int List<int>::get(size_t i) const;
template std::string List<std::string>::get(size_t i) const;
template float List<float>::get(size_t i) const;
template double List<double>::get(size_t i) const;

template <typename T>
void List<T>::remove(size_t i) {
  data.erase(data.begin() + i);
}

template void List<int>::remove(size_t i);
template void List<std::string>::remove(size_t i);
template void List<float>::remove(size_t i);
template void List<double>::remove(size_t i);

template <typename T>
size_t List<T>::size() const {
  return data.size();
}

template size_t List<int>::size() const;
template size_t List<std::string>::size() const;
template size_t List<float>::size() const;
template size_t List<double>::size() const;

