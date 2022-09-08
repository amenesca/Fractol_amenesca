NAME 		= fractol

LIBFT		= ./libft/libft.a

SRCS		= ./src/handle_keys.c ./src/fractol.c ./src/draw_fractol.c ./src/put_fractol.c ./src/put_colors.c

OBJS		= $(SRCS:.c=.o)

CFLAGS		= -Wall -Wextra -Werror

RM			= rm -f

.c.o:
			cc $(CFLAGS) -c $< -o $(<:.c=.o) -I ./includes

$(NAME):	$(OBJS)
				make -C ./libft
				make -C ./mlx
				cc $(OBJS) -L ./mlx -l mlx -framework OpenGl -framework Appkit $(LIBFT) -o $(NAME)

all:		$(NAME)

clean:
			$(RM) $(OBJS)
				make clean -C ./libft
				make clean -C ./mlx

fclean:		clean
				$(RM) $(NAME)
				make fclean -C ./libft

re:			fclean all

.PHONY:		all clean fclean re
