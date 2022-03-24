// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX02_MUTANTSTACK_TPP_
#define EX02_MUTANTSTACK_TPP_

#include "MutantStack.hpp"

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void) {
  return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void) {
  return this->c.end();
}

template <typename T>
MutantStack<T>::MutantStack(void) : std::stack<T>() {
  return;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& src) : std::stack<T>() {
  *this = src;
}

template <typename T>
MutantStack<T>::~MutantStack(void) {
  return;
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& rhs) {
//   std::stack<T>::operator=(rhs);
  this->c = rhs.c;
  return (*this);
}

#endif  // EX02_MUTANTSTACK_TPP_
