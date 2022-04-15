// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX01_ITER_HPP_
#define EX01_ITER_HPP_

template <typename T>
void iter(T* addr, size_t lenght, void (*f)(const T&)) {
  for (size_t i = 0; i < lenght; i++) {
    f(addr[i]);
  }
}

template <typename T>
void print2(const T& x) {
  std::cout << x << " ";
}

#endif  // EX01_ITER_HPP_
