/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:09:47 by wleite            #+#    #+#             */
/*   Updated: 2022/03/15 14:23:08 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"

class MateriaSource : public IMateriaSource {
   public:
	MateriaSource(void);
	MateriaSource(MateriaSource const &src);
	virtual ~MateriaSource(void);

	MateriaSource &operator=(MateriaSource const &rhs);

	AMateria const *getAMateria(int idx) const;
	void learnMateria(AMateria *m);
	AMateria *createMateria(std::string const &type);

   private:
	AMateria *_materias[4];
};

#endif
