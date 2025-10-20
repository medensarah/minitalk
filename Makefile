GREEN = \033[0;38;2;142;194;121;49m
LIGHTGREEN = \033[0;38;2;142;255;105;49m
YELLOW = \033[0;93m
LIGHTYELLOW = \033[1;33m
PINK = \033[0;38;2;255;206;248;49m
PURPLE = \033[0;38;2;194;170;242;49m
NONE = \033[0m

NAME = minitalk
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = main.c signal.c
OBJDIR = objects
OBJS = $(SRCS:.c=.o)
OBJS := $(addprefix $(OBJDIR)/, $(OBJS))


PRINTF_DIR = ft_printf
PRINTF = $(PRINTF_DIR)/printf.a

all: $(PRINTF) $(NAME)

$(PRINTF):
	@$(MAKE) --no-print-directory -C $(PRINTF_DIR)
	@echo "$(LIGHTGREEN)Library printf ready$(NONE)"

$(NAME): $(OBJS) $(PRINTF)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(PRINTF)
	@echo "$(PINK)Build complete (./$(NAME))$(NONE)"

$(OBJDIR):
	@mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: %.c | $(OBJDIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(GREEN)Compiling $<$(NONE)"

clean:
	@rm -f $(OBJS)
	@rm -rf $(OBJDIR)
	@$(MAKE) --no-print-directory -C $(PRINTF_DIR) clean
	@echo "$(YELLOW)Cleaned objects$(NONE)"

fclean: clean
	@rm -f $(NAME)
	@$(MAKE) --no-print-directory -C $(PRINTF_DIR) fclean
	@echo "$(LIGHTYELLOW)Cleaned all$(NONE)"

re: fclean all
	@echo "$(PURPLE)Rebuild complete$(NONE)"

.PHONY: all clean fclean re
