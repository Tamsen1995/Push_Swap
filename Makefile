CC = gcc
FLAGS = -Wall -Wextra -Werror

LIBFT = libft.a
NAME = push_swap
SRC = push_ft_push_swap.c \
	push_ft_push_swap_sub.c \
	push_ft_push_swap_sub_two.c \
	push_operations.c \
	push_operations_two.c \
	push_my_sort.c \
	push_my_sort_sub.c \
	push_quick_sort.c \
	push_quick_sort_sub.c \
	push_small_sort.c \
	push_small_sort_sub.c \
	push_just_swap.c \
	push_bas_pile.c \
	push_bubble_sort.c \
	push_bubble_sort_two.c \
	push_bubble_sort_three.c \

TWO = checker
SRCTWO = check_ft_checker.c \
		check_ft_checker_two.c \
		check_validation_module.c \
		check_output_module.c \
		check_operations.c \
		check_operations_two.c \
		get_next_line.c \

all: $(LIBFT) $(NAME) $(TWO)

$(LIBFT):
	make -C libft/

$(NAME):
	@echo "building binary file"
	@$(CC) $(FLAGS) $(SRC) -o $(NAME) -I -lft $(LIBFT)

$(TWO):
	@echo "building checker binary file"
	@$(CC) $(FLAGS) $(SRCTWO) -o $(TWO) -I -lft $(LIBFT)

clean:
	@make clean -C libft/

fclean: clean
	@echo "delete $(NAME) $(TWO)"
	@rm -f $(NAME) $(TWO)
	@make fclean -C libft/

re: fclean all


