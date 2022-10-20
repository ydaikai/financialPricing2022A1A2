NAME = UTMain1
CC = g++
SRCS = UTMain1.cpp UTRandom1.cpp
OBJS = $(SRCS:.cpp=.o)
CFLAGS = -Wall -Wextra -Werror

$(NAME):	$(SRCS) $(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

all:		
			$(NAME)

clean:		
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re: 		fclean all