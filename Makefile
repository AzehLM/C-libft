NAME		:= libft.a

include libft.mk

BUILD_DIR	:= .build/
OBJS 		:= $(patsubst $(SRCSDIR)%.c,$(BUILD_DIR)%.o,$(SRCS))
DEPS		:= $(OBJS:.o=.d)

# ********** FLAGS AND COMPILATION FLAGS ************************************* #

CC			:= cc
CFLAGS		:= -Wall -Wextra -Werror -g3
CPPFLAGS	:= -MMD -MP -I . -I incs/

AR			:= ar
ARFLAGS		:= -r -c -s

RM			:= rm -f
RMDIR		+= -r
MAKEFLAGS	+= --no-print-directory
DIR_DUP		= mkdir -p $(BUILD_DIR)

.DEFAULT_GOAL	:= all

# ********** RULES *********************************************************** #

-include $(DEPS)

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	@echo "$(BGGREEN)SUCCESSFULLY CREATED $@$(RESETC)"

$(BUILD_DIR)%.o: $(SRCSDIR)%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(CPPFLAGS) -c -o $@ $<

clean:
	@$(RM) $(OBJS) $(DEPS)
	@echo "$(BGRED)DELETED OBJS AND DEPS$(RESETC)"

fclean: clean
	$(RM) $(RMDIR) $(NAME) $(BUILD_DIR)
	@echo "$(BGRED)DELETED $(NAME) AND $(BUILD_DIR)$(RESETC)"

re: fclean all

.PHONY: all clean fclean re

.SILENT: clean fclean

# ********** COLORS AND BACKGROUND COLORS ************************************ #

RESETC		:= \033[0m

BGRED		:= \e[37;41m
BGGREEN		:= \e[37;42m
BGYELLOW	:= \e[37;43m
