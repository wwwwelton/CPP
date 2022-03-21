// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "easyfind.hpp"

template <typename T>
typename T::iterator easyfind(T &container, int value) {
  typename T::iterator iter = std::find(container.begin(),
                                        container.end(),
                                        value);
  if (iter == container.end()) {
    throw std::runtime_error(std::string("Value not found"));
  }
  return (iter);
}
