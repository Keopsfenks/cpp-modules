NAME = file
SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:.cpp=.o)
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean:
	@$(RM)  $(OBJS)
	@$(RM) $(wildcard *.replace)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re