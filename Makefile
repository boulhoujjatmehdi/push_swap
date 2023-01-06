OPE = operations/pa.c 

SRC =  push_swap.c list_link.c $(OPE)
OBJ = $(SRC:.c=.o)
NAME = push_swap
CCF = cc -Wall -Wextra -Werror

%.o:%.c
	$(CCF) -c $< -o $@

operations/%.o:%.c | operations
	$(CCF) -c $<

all: $(NAME)

$(NAME): $(OBJ)
	# CCF $< -o $@

