OPE = pa.c    pb.c    ra.c    rb.c    rr.c    rra.c   rrb.c   rrr.c   sa.c    sb.c    ss.c

SRC =  ft_push_swap.c ft_list_link.c ft_list_link_extra.c ft_gets_file.c ft_sort_file.c ft_utils.c args.c $(patsubst %,operations/%,$(OPE))

NAME = push_swap
CCF = cc -Wall -Wextra -Werror

PRT = printf/libftprintf.a
LBT = libft/libft.a

# %.o:%.c
# 	$(CCF) -c $< -o $@

all:$(NAME)

$(NAME):$(LBT) $(PRT) $(SRC)
	$(CCF) $(SRC) $(LBT) $(PRT) -o $@

$(LBT):
	@make -C libft

$(PRT):
	@make -C printf

clean:
	@make -C libft clean
	@make -C printf clean
	@rm -rf $(OBJ)


fclean: clean 
	@make -C libft fclean
	@make -C printf fclean
	@rm -rf $(NAME) 

re:fclean all