# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/16 12:42:59 by tuzan             #+#    #+#              #
#    Updated: 2024/10/16 12:42:59 by tuzan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rcs

SRC = ft_isalpha.c \
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
	ft_strmapi.c \
	ft_striteri.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_putchar_fd.c 
#ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

#B_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
#	ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
#	ft_lstclear.c ft_lstiter.c ft_lstmap.c \

OBJ = $(SRC:.c=.o)

B_OBJ = $(B_SRC:.c=.o)

all: $(NAME)
	
$(NAME): $(OBJ)	
	@$(AR) $(NAME) $(OBJ)
	@echo " ✔ 📚 $(NAME) static library created"

bonus: $(B_OBJ)
	@$(AR) $(NAME) $(B_OBJ)
	@echo " ✔ 📚 $(NAME) static library created with bonus files"
	
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo " ✔ 📃 $@ file created"
	
clean:
	@$(RM) $(OBJ) $(B_OBJ)
	@echo " ✔ 🧹 Object files cleaned"

fclean: clean
	@$(RM) $(NAME)
	@echo " ✔ 🧹 $(NAME) static library cleaned"
	
re: fclean all
	@echo " ✔ 🛠️  Project rebuilded"

.PHONY: all bonus clean fclean re