// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX00_EASYFIND_HPP_
#define EX00_EASYFIND_HPP_

#include <algorithm>
#include <deque>
#include <exception>
#include <list>
#include <string>
#include <vector>

template <typename T>
typename T::iterator easyfind(T &container, int value);

#include "easyfind.tpp"

#endif  // EX00_EASYFIND_HPP_
