// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX00_FIXED_HPP_
#define EX00_FIXED_HPP_

#include <iostream>

class Fixed {
 public:
  Fixed(void);
  Fixed(Fixed const &src);
  ~Fixed(void);

  Fixed &operator=(Fixed const &src);

  int getRawBits(void) const;
  void setRawBits(int const raw);

 private:
  int _rawBits;
  static int const _fractionalBits;
};

#endif  // EX00_FIXED_HPP_
