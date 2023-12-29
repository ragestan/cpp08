CXX = c++
CPPFLAGS    = -Wall -Wextra -Werror -std=c++98
RM        = rm -f
NAME    = Span
SRC        = main.cpp\
			Span.cpp\

FILIO = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(FILIO)
		${CXX} ${CPPFLAGS} ${FILIO} -o ${NAME}

clean:
	$(RM) $(FILIO)

fclean: clean
	$(RM) $(NAME)

re: fclean all