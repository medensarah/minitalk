NAME = server
CC = cc
CFLAGS = -Wall -Wextra -Werror

OBJDIR = objects
PRINTF_DIR = ../ft_printf
PRINTF = $(PRINTF_DIR)/printf.a

SRCS = main.c signal.c
OBJS = $(SRCS:.c=.o)
OBJS := $(addprefix $(OBJDIR)/, $(OBJS))

all: $(PRINTF) $(OBJDIR) $(NAME)

$(PRINTF):
	@$(MAKE) --no-print-directory -C $(PRINTF_DIR)

$(OBJDIR):
	@mkdir -p $(OBJDIR)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(PRINTF)

$(OBJDIR)/%.o: %.c | $(OBJDIR)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@rm -rf $(OBJDIR)
	@$(MAKE) --no-print-directory -C $(PRINTF_DIR) clean

fclean: clean
	@rm -f $(NAME)
	@$(MAKE) --no-print-directory -C $(PRINTF_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
