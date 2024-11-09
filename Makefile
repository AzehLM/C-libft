NAME		:= libft.a

SRCS		:= \
	ft_bzero.c \
	ft_memset.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_memmove.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_strdup.c \
	ft_substr.c \
	ft_memcpy.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putstr_fd.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_putnbr_fd.c \
	ft_split.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_itoa.c \

SRCSB		:= \
	ft_lstnew_bonus.c \

BUILD_DIR	:= .build
OBJS		:= $(SRCS:%.c=$(BUILD_DIR)/%.o)
OBJSB		:= $(SRCSB:%.c=$(BUILD_DIR)/%.o)
DEPS		:= $(OBJS:.o=.d)
DEPSB		:= $(OBJSB:.o=.d)

# ********** COLORS AND BACKGROUND COLORS **********

RESETC		:= \033[0m

RED         := \e[0;31m
GREEN       := \e[0;32m
YELLOW      := \e[0;33m

BGRED		:= \e[37;41m
BGGREEN		:= \e[37;42m
BGYELLOW	:= \e[37;43m

# ********** FLAGS AND COMPILATION MODE ************************************** #

CC			:= cc
CFLAGS		:= -Wall -Wextra -Werror -g3
CPPFLAGS    := -MMD -MP -I .

AR			:= ar
ARFLAGS		:= -r -c -s


RM          := rm -f
RMDIR       += -r
MAKEFLAGS   += --no-print-directory
DIR_DUP     = mkdir -p $(BUILD_DIR)


all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	@echo "$(BGGREEN)SUCCESSFULLY CREATED $@$(RESETC)"

$(BUILD_DIR)/%.o: %.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) $(CPPFLAGS) -c -o $@ $<

$(BUILD_DIR):
	@$(DIR_DUP)
	@echo "$(BGYELLOW)CREATED $(BUILD_DIR) directory$(RESETC)"

-include $(DEPS)

clean:
	@$(RM) $(OBJS) $(DEPS)
	@echo "$(BGRED)DELETED OBJS and DEPS$(RESETC)"

fclean: clean
	$(RM) $(RMDIR) $(NAME) $(BUILD_DIR) libft.so
	@echo "$(BGRED)DELETED $(NAME) and $(BUILD_DIR)$(RESETC)"

bonus:	$(NAME) $(OBJSB)
	@$(AR) $(ARFLAGS) $(NAME) $(OBJSB)
	@echo "$(BGGREEN)ADDED $@ files$(RESETC)"

re: fclean all

#######################
#     FANCY TESTER    #
#######################

so: CFLAGS += -fPIC
so: $(OBJS) $(OBJSB)
	$(CC) -shared -o libft.so $(OBJS) $(OBJSB)
	@echo "$(GREEN)CREATED libft.so$(RESETC)"

#######################

.PHONY: all clean fclean re

.SILENT: clean fclean
