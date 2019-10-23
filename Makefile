# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lryst <lryst@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/21 12:05:57 by lryst             #+#    #+#              #
#    Updated: 2019/10/21 17:24:14 by lryst            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_memset.c \
 		ft_bzero.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \

OBJS	= ${SRCS: .c=.o}

NAME	= libft.a

CC		= gcc ${INCLUDES} ${CFLAGS}

rm		= rm -f

HEADERS	= libft.h

CFALGS	= -Wall -Wextra -Werror
	
$(NAME):	$(SRCS) $(OBJS) $(HEADERS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

all:	${NAME}

.c.o:
	${CC} ${CFALGS} -c $< -o ${<:.c=.o}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:		fclean all

.PHONY:	all fclean clean re