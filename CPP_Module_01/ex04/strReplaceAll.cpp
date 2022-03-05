/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strReplaceAll.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:50:10 by wleite            #+#    #+#             */
/*   Updated: 2022/03/05 20:58:51 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strReplaceAll.hpp"

std::string strReplace(const std::string &str,
                       const std::string &oldWord,
                       const std::string &newWord) {
	std::string strReplaced;

	if (str.empty() || oldWord.empty() || newWord.empty())
		return (str.substr(0, str.length()));
	size_t pos = str.find(oldWord);
	if (pos == std::string::npos)
		return (str.substr(0, pos));
	strReplaced = str.substr(0, pos);
	strReplaced.append(newWord);
	strReplaced.append(str.substr(pos + oldWord.length(), str.length()));
	return (strReplaced);
}

std::string strReplaceAll(const std::string &str,
                          const std::string &oldWord,
                          const std::string &newWord) {
	std::string strReplaced = strReplace(str, oldWord, newWord);

	if (str.empty() || oldWord.empty() || newWord.empty())
		return (str.substr(0, str.length()));
	size_t pos = strReplaced.find(oldWord);
	while (pos != std::string::npos) {
		strReplaced = strReplace(strReplaced, oldWord, newWord);
		pos = strReplaced.find(oldWord);
	}
	return (strReplaced);
}
