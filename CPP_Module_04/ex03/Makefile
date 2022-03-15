SOURCES_FILES	=	main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp
SOURCES_FILES	+=	MateriaSource.cpp

SOURCES_DIR		=	./

OBJ_DIR			=	objects

HEADERS			=	AMateria.hpp ICharacter.hpp Ice.hpp Cure.hpp Character.hpp
HEADERS			+=	IMateriaSource.hpp MateriaSource.hpp

SOURCES			=	$(addprefix $(SOURCES_DIR)/, $(SOURCES_FILES))

OBJECTS			=	$(SOURCES:$(SOURCES_DIR)/%.cpp=$(OBJ_DIR)/%.o)

NAME			=	recap

CC				=	c++
CFLAGS			=	-Wall -Wextra -Werror -std=c++98 -pedantic-errors -g

RM				=	rm -rf



$(OBJ_DIR)/%.o:		$(SOURCES_DIR)/%.cpp $(HEADERS)
					$(CC) $(CFLAGS) -c $< -o $@

all:				$(NAME)

$(NAME):			$(OBJ_DIR) $(OBJECTS) $(HEADERS)
					$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

$(OBJ_DIR):
					mkdir -p $(OBJ_DIR)

clean:
					$(RM) $(OBJ_DIR)

fclean:				clean
					$(RM) $(NAME)

re:					fclean all

.PHONY:				all clean fclean re
