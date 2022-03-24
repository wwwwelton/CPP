// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX02_MUTANTSTACK_HPP_
#define EX02_MUTANTSTACK_HPP_

// #include <deque>
// #include <iterator>
#include <stack>

template <class T>
// class MutantStack : public std::stack<T, std::deque<T> > {
class MutantStack : public std::stack<T> {
 public:
//  typedef typename std::deque<T>::iterator iterator;
  typedef typename std::stack<T>::container_type::iterator iterator;

  iterator begin(void);
  iterator end(void);

  MutantStack<T>(void);
  MutantStack<T>(const MutantStack<T>& src);
  ~MutantStack<T>(void);

  MutantStack<T>& operator=(const MutantStack<T>& rhs);
};

#include "MutantStack.tpp"

#endif  // EX02_MUTANTSTACK_HPP_
