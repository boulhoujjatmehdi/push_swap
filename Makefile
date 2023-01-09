OPE = pa.c    pb.c    ra.c    rb.c    rr.c    rra.c   rrb.c   rrr.c   sa.c    sb.c    ss.c

SRC =  push_swap.c list_link.c gets_file.c sort_file.c $(patsubst %,operations/%,$(OPE))

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
	make -C libft

$(PRT):
	make -C printf

clean:
	make -C libft clean
	make -C printf clean
	rm -rf $(OBJ)


fclean: clean 
	make -C libft fclean
	make -C printf fclean
	rm -rf $(NAME) 

re:fclean all