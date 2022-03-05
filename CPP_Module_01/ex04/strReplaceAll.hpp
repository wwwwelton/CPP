/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strReplaceAll.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:49:38 by wleite            #+#    #+#             */
/*   Updated: 2022/03/05 19:46:30 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_REPLACE_ALL_HPP
#define STR_REPLACE_ALL_HPP

#include <string>

std::string strReplace(const std::string& str,
                       const std::string& oldWord,
                       const std::string& newWord);

std::string strReplaceAll(const std::string& str,
                          const std::string& oldWord,
                          const std::string& newWord);

#endif
