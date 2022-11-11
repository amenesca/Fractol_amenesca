# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amenesca <amenesca@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/23 12:43:29 by amenesca          #+#    #+#              #
#    Updated: 2022/09/23 12:43:33 by amenesca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= fractol

LIBFT		= ./libft/libft.a

SRCS		= ./src/handle_keys.c ./src/fractol.c ./src/draw_fractol.c ./src/put_colors.c ./src/put_image.c ./src/fractol_zoom.c \
				./src/mlx_fractol.c ./src/render_fractol.c ./src/hsv_to_rgb.c ./src/my_atof.c ./src/fractol_error.c

OBJS		= $(SRCS:.c=.o)

CFLAGS		= -Wall -Wextra -Werror

RM			= rm -f

UNAME		= $(shell uname)

ifeq ($(UNAME), Linux)
	OFLAGS		= $(CFLAGS) -L ./mlx_linux -lmlx_Linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz
	MLX			= ./mlx_linux
else
	OFLAGS		= $(CFLAGS) -L ./mlx -l mlx -framework OpenGl -framework Appkit
	MLX			= ./mlx
endif

.c.o:
			cc $(CFLAGS) -c $< -o $(<:.c=.o) -I ./includes

$(NAME):	$(OBJS)
				make -C ./libft
				make -C $(MLX)
				cc $(OBJS) $(OFLAGS) $(LIBFT) -o $(NAME)

all:		$(NAME)

clean:
			$(RM) $(OBJS)
				make clean -C ./libft
				make clean -C $(MLX)

fclean:		clean
				$(RM) $(NAME)
				make fclean -C ./libft

re:			fclean all

.PHONY:		all clean fclean re
