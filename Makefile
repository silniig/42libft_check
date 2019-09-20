NAME = libft-checker
LIBFT_DIR = ..
TESTS_DIR = repo_tester
SRCS = $(wildcard *.c)
HDRS = test_libft.h $(wildcard $(LIBFT_DIR)/*.h)
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS) libft.a
	gcc $(OBJS) -lft -L$(LIBFT_DIR) -o $(NAME)

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@ -I$(LIBFT_DIR)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

libft.a :
	cd $(LIBFT_DIR) && make && cd $(TESTS_DIR)
