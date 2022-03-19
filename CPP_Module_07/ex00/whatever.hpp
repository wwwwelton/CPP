// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX00_WHATEVER_HPP_
#define EX00_WHATEVER_HPP_

template <typename T>
void swap(T& a, T& b) {
  T temp;

  temp = a;
  a = b;
  b = temp;
}

template <typename T>
const T& min(const T& a, const T& b) {
  return ((a < b) ? a : b);
}

template <typename T>
const T& max(const T& a, const T& b) {
  return ((a > b) ? a : b);
}

#endif  // EX00_WHATEVER_HPP_
