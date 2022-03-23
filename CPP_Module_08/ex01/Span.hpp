// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX01_SPAN_HPP_
#define EX01_SPAN_HPP_

#include <algorithm>
#include <climits>
#include <exception>
#include <vector>

class Span {
 public:
  class NotEnoughCapacity : public std::exception {
   public:
    const char* what(void) const throw();
  };

  class InsufficientElements : public std::exception {
   public:
    const char* what(void) const throw();
  };

  Span(void);
  explicit Span(size_t maximum);
  Span(const Span& src);
  ~Span(void);

  Span& operator=(const Span& rhs);

  const std::vector<int>& getContainer(void) const;
  size_t getMaximum(void) const;
  size_t getSize(void) const;
  int getValueAt(size_t pos);

  void addNumber(int n);

  template <typename T>
  void addRange(T itBegin, T itEnd);

  size_t shortestSpan(void);
  size_t longestSpan(void);

 private:
  std::vector<int> _vect;
  size_t _maximum;
};

#include "Span.tpp"

#endif  // EX01_SPAN_HPP_
