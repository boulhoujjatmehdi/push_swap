OPE = pa.c    pb.c    ra.c    rb.c    rr.c    rra.c   rrb.c   rrr.c   sa.c    sb.c    ss.c

SRC =  push_swap.c list_link.c get_files.c $(patsubst %,operations/%,$(OPE))

OBJ = $(SRC:.c=.o)
NAME = push_swap
CCF = cc -Wall -Wextra -Werror

LBT = libft/libft.a

%.o:%.c
	$(CCF) -c $< -o $@

all:$(NAME)

$(NAME):$(LBT) $(OBJ)
	$(CCF) $(OBJ) $(LBT) -o $@


# LIBRARIES
$(LBT):
	make -C libft

clean:
	make -C libft clean
	rm *.o operations/*.o
	rm *.o
fclean: clean 
	make -C libft fclean
	rm push_swap 
