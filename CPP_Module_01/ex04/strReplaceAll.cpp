// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "strReplaceAll.hpp"

std::string strReplace(const std::string &str,
                       const std::string &oldWord,
                       const std::string &newWord,
                       size_t pos) {
  std::string strReplaced;

  if (str.empty() || oldWord.empty() || newWord.empty())
    return (str);
  pos = str.find(oldWord, pos);
  if (pos == std::string::npos)
    return (str);
  strReplaced = str.substr(0, pos);
  strReplaced.append(newWord);
  strReplaced.append(str.substr(pos + oldWord.length()));
  return (strReplaced);
}

std::string strReplaceAll(const std::string &str,
                          const std::string &oldWord,
                          const std::string &newWord) {
  std::string strReplaced;

  if (str.empty() || oldWord.empty() || newWord.empty())
    return (str);
  strReplaced.assign(str);
  size_t pos = strReplaced.find(oldWord);
  while (pos != std::string::npos) {
    strReplaced = strReplace(strReplaced, oldWord, newWord, pos);
    pos = strReplaced.find(oldWord, pos + newWord.length());
  }
  return (strReplaced);
}
