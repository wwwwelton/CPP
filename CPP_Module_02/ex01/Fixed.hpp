// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX01_FIXED_HPP_
#define EX01_FIXED_HPP_

#include <iostream>

class Fixed {
 public:
  Fixed(void);
  explicit Fixed(int const n);
  explicit Fixed(float const f);
  Fixed(Fixed const &src);
  ~Fixed(void);

  Fixed &operator=(Fixed const &src);

  int getRawBits(void) const;
  void setRawBits(int const raw);
  float toFloat(void) const;
  int toInt(void) const;

 private:
  int _rawBits;
  static int const _fractionalBits;
};

std::ostream &operator<<(std::ostream &o, Fixed const &i);

#endif  // EX01_FIXED_HPP_
