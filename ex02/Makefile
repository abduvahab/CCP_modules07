NAME=ex02
GCC=c++
CFLAGS=-Wall -Wextra -Werror -std=c++98

SRCS=main.cpp

OBJS= ${SRCS:.cpp=.o}

all:$(NAME)

$(NAME): $(OBJS)
	$(GCC) $(CFLAGS) -o $@ $^


.cpp.o:
	$(GCC) $(CFLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJS)

fclean:clean
	rm -rf $(NAME)
re :fclean all

.PHONEY:re clean fclean all re 
