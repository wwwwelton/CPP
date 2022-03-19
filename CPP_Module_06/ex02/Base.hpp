// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX02_BASE_HPP_
#define EX02_BASE_HPP_

#include <cstdlib>
#include <iostream>

class Base {
 public:
  virtual ~Base(void) {}
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

#endif  // EX02_BASE_HPP_
