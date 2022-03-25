// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX02_FIXED_HPP_
#define EX02_FIXED_HPP_

#include <cmath>
#include <iostream>

class Fixed {
 public:
  Fixed(void);
  explicit Fixed(int const n);
  explicit Fixed(float const f);
  Fixed(Fixed const &src);
  ~Fixed(void);

  Fixed &operator=(Fixed const &rhs);

  bool operator>(Fixed const &rhs) const;
  bool operator<(Fixed const &rhs) const;
  bool operator>=(Fixed const &rhs) const;
  bool operator<=(Fixed const &rhs) const;
  bool operator==(Fixed const &rhs) const;
  bool operator!=(Fixed const &rhs) const;

  Fixed operator+(Fixed const &rhs) const;
  Fixed operator-(Fixed const &rhs) const;
  Fixed operator*(Fixed const &rhs) const;
  Fixed operator/(Fixed const &rhs) const;

  Fixed &operator++(void);  // Prefix increment operator.
  Fixed operator++(int);    // Postfix increment operator.
  Fixed &operator--(void);  // Prefix decrement operator.
  Fixed operator--(int);    // Postfix decrement operator.

  static Fixed &min(Fixed &lhs, Fixed &rhs);
  static Fixed const &min(Fixed const &lhs, Fixed const &rhs);
  static Fixed &max(Fixed &lhs, Fixed &rhs);
  static Fixed const &max(Fixed const &lhs, Fixed const &rhs);

  int getRawBits(void) const;
  void setRawBits(int const raw);
  float toFloat(void) const;
  int toInt(void) const;

 private:
  int _rawBits;
  static int const _fractionalBits;
};

std::ostream &operator<<(std::ostream &o, Fixed const &i);

#endif  // EX02_FIXED_HPP_
