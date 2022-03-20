// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX02_ARRAY_HPP_
#define EX02_ARRAY_HPP_

#include <cstddef>
#include <stdexcept>

template <typename T>
class Array {
 public:
  Array<T>(void) : _size(0), _ptr(NULL) {
    return;
  }

  explicit Array<T>(unsigned int n) : _size(n), _ptr(NULL) {
    if (this->_size) {
      this->_ptr = new T[this->_size];
    }
  }

  Array<T>(const Array<T>& src) : _size(src.size()), _ptr(NULL) {
    if (this->_size) {
      this->_ptr = new T[this->_size];
    }
    *this = src;
  }

  ~Array<T>(void) {
    if (this->_size) {
      delete[] this->_ptr;
    }
    this->_ptr = NULL;
    this->_size = 0;
  }

  Array<T>& operator=(const Array<T>& rhs) {
    if (this != &rhs) {
      if (this->_size) {
        delete this->_ptr;
      }
      this->_size = rhs.size();
      if (this->_size) {
        this->_ptr = new T[this->_size];
      }
      for (size_t i = 0; i < this->size(); i++) {
        this->_ptr[i] = rhs[i];
      }
    }
    return (*this);
  }

  T& operator[](size_t i) {
    if (i < 0 || i >= this->_size) {
      throw std::out_of_range("The index is out of range!\n");
    }
    return (this->_ptr[i]);
  }

  const T& operator[](size_t i) const {
    if (i < 0 || i >= this->_size) {
      throw std::out_of_range("The index is out of range!\n");
    }
    return (this->_ptr[i]);
  }

  size_t size(void) const {
    return (this->_size);
  }

 private:
  size_t _size;
  T* _ptr;
};

template <typename T>
std::ostream& operator<<(std::ostream& o, const Array<T>& i) {
  for (size_t j = 0; j < i.size(); j++) {
    std::cout << i[j];
    if (j + 1 < i.size()) {
      std::cout << " ";
    }
  }
  std::cout << "\n";
  return (o);
}

#endif  // EX02_ARRAY_HPP_
