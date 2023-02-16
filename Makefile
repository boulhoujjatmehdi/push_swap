OPE = pa.c    pb.c    ra.c    rb.c    rr.c    rra.c   rrb.c   rrr.c   sa.c    sb.c    ss.c

GNL = gnl/get_next_line.c gnl/get_next_line_utils.c


MDTR = main.c  push_swap.c list_link.c list_link_extra.c gets_file.c sort_file.c utils.c utils_2.c args.c
BNS  = checker checker_utils utils args list_link list_link_extra

SRC = 			$(patsubst %,mandatory/ft_%,$(MDTR))\
				$(patsubst %,operations/%,$(OPE))

BSRC =  $(GNL) 	$(patsubst %,bonus_files/ft_%_bonus.c,$(BNS))\
				$(patsubst %,operations_mute/ft_%,$(OPE))\
				$(patsubst %,operations/%,$(OPE))

NAME = push_swap

MANHEAD = ft_push_swap.h
BONHEAD = ft_checker_bonus.h
CCF = cc -Wall -Wextra -Werror

PRT = printf/libftprintf.a
LBT = libft/libft.a

all:$(NAME)

bonus:checker

$(NAME):$(LBT) $(PRT) $(SRC) $(MANHEAD)
	$(CCF) $(SRC) $(LBT) $(PRT) -o $@

checker:$(LBT) $(PRT) $(BSRC) $(BONHEAD)
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
	@rm -rf $(NAME) checker

re:fclean all