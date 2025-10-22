GREEN = \033[0;38;2;142;194;121;49m
LIGHTGREEN = \033[0;38;2;142;255;105;49m
YELLOW = \033[0;93m
LIGHTYELLOW = \033[1;33m
PINK = \033[0;38;2;255;206;248;49m
PURPLE = \033[0;38;2;194;170;242;49m
NONE = \033[0m

SERVER_DIR = server
CLIENT_DIR = client

all:
	@$(MAKE) --no-print-directory -C $(SERVER_DIR)
	@echo "$(LIGHTGREEN)Building $(SERVER_DIR)...$(NONE)"
	@$(MAKE) --no-print-directory -C $(CLIENT_DIR)
	@echo "$(LIGHTGREEN)Building $(CLIENT_DIR)...$(NONE)"
	@echo "$(PINK)All components are build$(NONE)"

clean:
	@$(MAKE) --no-print-directory -C $(SERVER_DIR) clean
	@echo "$(YELLOW)Clean objects in $(SERVER_DIR)$(NONE)"
	@$(MAKE) --no-print-directory -C $(CLIENT_DIR) clean
	@echo "$(YELLOW)Clean objects in $(CLIENT_DIR)$(NONE)"

fclean: clean
	@$(MAKE) --no-print-directory -C $(SERVER_DIR) fclean
	@$(MAKE) --no-print-directory -C $(CLIENT_DIR) fclean
	@echo "$(LIGHTYELLOW)Cleaned all: $(SERVER_DIR), $(CLIENT_DIR)$(NONE)"

re: fclean all
	@echo "$(PURPLE)Rebuild complete$(NONE)"

.PHONY: all clean fclean re
