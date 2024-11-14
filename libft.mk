# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft.mk                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gueberso <gueberso@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/14 10:09:03 by gueberso          #+#    #+#              #
#    Updated: 2024/11/14 12:25:59 by gueberso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

override SRCSDIR := srcs/
override SRCS	= $(addprefix $(SRCSDIR),$(SRC))

SRC += $(addprefix $(CHARDIR), $(addsuffix .c, $(CHARSRC)))

override CHARDIR := charset/
override FDDIR := fd/
override INTDIR := int/
override LISTDIR := list/
override MEMORYDIR := memory/
override STRINGDIR := string/

override CHARSRC := \
	ft_isalnum \
	ft_isalpha \
	ft_isascii \
	ft_isdigit \
	ft_isprint \
	ft_tolower \
	ft_toupper \

SRC += $(addprefix $(FDDIR), $(addsuffix .c, $(FDSRC)))


override FDSRC := \
	ft_putchar_fd \
	ft_putendl_fd \
	ft_putnbr_fd \
	ft_putstr_fd \

SRC += $(addprefix $(INTDIR), $(addsuffix .c, $(INTSRC)))


override INTSRC := \
	ft_atoi \
	ft_itoa \

SRC += $(addprefix $(LISTDIR), $(addsuffix .c, $(LISTSRC)))


override LISTSRC := \
	ft_lstadd_back \
	ft_lstadd_front \
	ft_lstclear \
	ft_lstdelone \
	ft_lstiter \
	ft_lstlast \
	ft_lstnew \
	ft_lstsize \
	ft_lstmap \

SRC += $(addprefix $(MEMORYDIR), $(addsuffix .c, $(MEMORYSRC)))


override MEMORYSRC := \
	ft_bzero \
	ft_calloc \
	ft_memchr \
	ft_memcmp \
	ft_memcpy \
	ft_memset \
	ft_memmove \

SRC += $(addprefix $(STRINGDIR), $(addsuffix .c, $(STRINGSRC)))


override STRINGSRC := \
	ft_split \
	ft_strchr \
	ft_strdup \
	ft_striteri \
	ft_strjoin \
	ft_strlcat \
	ft_strlcpy \
	ft_strlen \
	ft_strmapi \
	ft_strncmp \
	ft_strnstr \
	ft_strrchr \
	ft_strtrim \
	ft_substr \
