SOURCES_FILES	=	main.cpp Span.cpp

SOURCES_DIR		=	./

OBJ_DIR			=	objects

HEADERS			=	Span.hpp Span.tpp

SOURCES			=	$(addprefix $(SOURCES_DIR)/, $(SOURCES_FILES))

OBJECTS			=	$(SOURCES:$(SOURCES_DIR)/%.cpp=$(OBJ_DIR)/%.o)

NAME			=	span

CC				=	c++
CFLAGS			=	-Wall -Wextra -Werror
CFLAGS			+=	-std=c++98 -pedantic-errors -g

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
