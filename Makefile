OPE = pa.c    pb.c    ra.c    rb.c    rr.c    rra.c   rrb.c   rrr.c   sa.c    sb.c    ss.c

GNL = gnl/get_next_line.c gnl/get_next_line_utils.c

SRC = ft_main.c  ft_push_swap.c ft_list_link.c ft_list_link_extra.c ft_gets_file.c ft_sort_file.c ft_utils.c ft_utils_2.c args.c $(patsubst %,operations/%,$(OPE))
BSRC = ft_checker_bonus.c ft_checker_utils.c ft_push_swap.c ft_gets_file.c ft_sort_file.c ft_utils.c ft_utils_2.c args.c ft_list_link.c ft_list_link_extra.c $(GNL)  $(patsubst %,operations_mute/ft_%,$(OPE)) $(patsubst %,operations/%,$(OPE))

NAME = push_swap

CCF = cc -Wall -Wextra -Werror

PRT = printf/libftprintf.a
LBT = libft/libft.a
# %.o:%.c
# 	$(CCF) -c $< -o $@


all:$(NAME)

$(NAME):$(LBT) $(PRT) $(SRC)
	$(CCF) $(SRC) $(LBT) $(PRT) -o $@

bonus:$(LBT) $(PRT) $(BSRC)
	$(CCF) $(BSRC) $(LBT) $(PRT) -o checker

$(LBT):
	@make -C libft

$(PRT):
	@make -C printf

clean:
	@make -C libft clean
	@make -C printf clean



fclean: clean 
	@make -C libft fclean
	@make -C printf fclean
	@rm -rf $(NAME) bonus

re:fclean all