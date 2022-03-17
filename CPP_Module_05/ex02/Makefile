SOURCES_FILES	=	main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp
SOURCES_FILES	+=	RobotomyRequestForm.cpp PresidentialPardonForm.cpp

SOURCES_DIR		=	./

OBJ_DIR			=	objects

HEADERS			=	Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp
HEADERS			+=	RobotomyRequestForm.hpp PresidentialPardonForm.hpp

SOURCES			=	$(addprefix $(SOURCES_DIR)/, $(SOURCES_FILES))

OBJECTS			=	$(SOURCES:$(SOURCES_DIR)/%.cpp=$(OBJ_DIR)/%.o)

NAME			=	form

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
					$(RM) $(OBJ_DIR) *_shrubbery

fclean:				clean
					$(RM) $(NAME)

re:					fclean all

.PHONY:				all clean fclean re
