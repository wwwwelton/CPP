// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX01_SPAN_TPP_
#define EX01_SPAN_TPP_

#include "Span.hpp"

template <typename T>
void Span::addRange(T itBegin, T itEnd) {
  size_t maxCapacity = this->_maximum - this->_vect.size();
  if (std::distance(itBegin, itEnd) > static_cast<int>(maxCapacity)) {
    throw NotEnoughCapacity();
  }
  while (itBegin != itEnd) {
    this->_vect.push_back(*itBegin);
    itBegin++;
  }
}

#endif  // EX01_SPAN_TPP_
