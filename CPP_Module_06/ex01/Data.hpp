// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX01_DATA_HPP_
#define EX01_DATA_HPP_

#include <stdint.h>

#include <string>

class Data {
 public:
  Data(void);
  Data(const std::string& name, float height, float weight);
  Data(const Data& src);
  ~Data(void);

  Data& operator=(const Data& rhs);

  std::string getName(void) const;
  float getHeight(void) const;
  float getWeight(void) const;

  float calculateIMC(void);

 private:
  std::string _name;
  float _height;
  float _weight;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif  // EX01_DATA_HPP_
