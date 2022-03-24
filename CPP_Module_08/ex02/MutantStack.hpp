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
  typedef typename std::stack<T>::container_type::iterator
      iterator;
  typedef typename std::stack<T>::container_type::const_iterator
      const_iterator;
  typedef typename std::stack<T>::container_type::reverse_iterator
      reverse_iterator;
  typedef typename std::stack<T>::container_type::const_reverse_iterator
      const_reverse_iterator;

  iterator begin(void);
  iterator end(void);

  const_iterator cbegin(void) const;
  const_iterator cend(void) const;

  reverse_iterator rbegin(void);
  reverse_iterator rend(void);

  const_reverse_iterator crbegin(void) const;
  const_reverse_iterator crend(void) const;

  MutantStack<T>(void);
  MutantStack<T>(const MutantStack<T>& src);
  ~MutantStack<T>(void);

  MutantStack<T>& operator=(const MutantStack<T>& rhs);
};

#include "MutantStack.tpp"

#endif  // EX02_MUTANTSTACK_HPP_
