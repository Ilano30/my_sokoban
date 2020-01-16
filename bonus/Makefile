##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	src/my_popup.c \
		src/malloc_2d_array.c \
		src/get_nb_rows_and_cols.c \
		src/open_read_file.c \
		src/fill_tab.c \
		src/error.c \
		src/usages.c \
		src/move_management_1.c \
		src/move_management_2.c \
		src/check_end_game_victory.c \
		src/check_end_game_defeat.c \
		src/my_popup_functions.c \
		src/display_options.c \
		src/display_options_2.c \
		src/display_char.c \
		src/map_loader.c \
		main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

CC	=	gcc

LDFLAGS	=	-lmy -L ./lib/my/ -lncurses

CPPFLAGS	=	-I ./include

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my/
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	make -C lib/my/ clean
	rm -f $(OBJ)
	rm -f *~

fclean:	clean
	make -C lib/my/ fclean
	rm -f $(NAME)

re:	fclean	all
