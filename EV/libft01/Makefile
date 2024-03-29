# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpithaks <rpithaks@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/14 17:35:49 by rpithaks          #+#    #+#              #
#    Updated: 2024/03/11 02:19:20 by rpithaks         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# variables

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
HEADERS	= libft.h

# source files
SRCS = \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
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
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c

SRCS_BONUS = \
	ft_lstnew_bonus.c \
	ft_lstadd_front_bonus.c \
	ft_lstsize_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstadd_back_bonus.c \
	ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c \
	ft_lstiter_bonus.c \
	ft_lstmap_bonus.c

# object files
OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

# archive file with create, replace, index
AR = ar rcs

# remove with force
RM = rm -f

# default target
all: $(NAME)
 
# build object file
%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

# build the library archive
$(NAME): $(OBJS)
	$(AR) $@ $^

# build the bonus library archive
bonus: $(OBJS) $(OBJS_BONUS)
	$(AR) $(NAME) $^					

# clean object files
clean:
	$(RM) $(OBJS) $(OBJS_BONUS)
						
# clean all files
fclean: clean
	$(RM) $(NAME)

# rebuild
re: fclean all
 
.PHONY: all clean fclean re bonus
