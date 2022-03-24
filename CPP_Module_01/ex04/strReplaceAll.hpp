// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX04_STRREPLACEALL_HPP_
#define EX04_STRREPLACEALL_HPP_

#include <string>

std::string strReplace(const std::string& str,
                       const std::string& oldWord,
                       const std::string& newWord,
                       size_t pos);

std::string strReplaceAll(const std::string& str,
                          const std::string& oldWord,
                          const std::string& newWord);

#endif  // EX04_STRREPLACEALL_HPP_
