// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX03_WEAPON_HPP_
#define EX03_WEAPON_HPP_

#include <string>

class Weapon {
 public:
  explicit Weapon(std::string type);
  ~Weapon(void);

  const std::string &getType(void) const;
  void setType(std::string type);

 private:
  std::string _type;
};

#endif  // EX03_WEAPON_HPP_
