# ----------dependense
# remove:	edit
# 	rm -rf test.txt

# edit:	create
# 	echo "tesssst" > test.txt

# create:
# 	touch test.txt


# --------- variables
# file_name := file.txt
# file:
# 	touch $(file_name)

# clean:
# 	rm -rf $(file_name)

# ---------- all target
# one:
# 	touch one.txt
# two:
# 	touch two.txt
# three:
# 	touch three.txt

# all : one two three

# clean:
# 	rm -rf one.txt two.txt three.txt

#------------ multiple targes
# f1.o f2.o:
# 	echo $@


# print: $(wildcard *.o)
# 	ls -la $?



#-------------------------- relink !!!!!!!!!!!!!!!!!!!!!!
FILES = ft_atoi.c  ft_bzero.c ft_calloc.c \
        ft_isalnum.c ft_isalpha.c ft_isascii.c \
        ft_isdigit.c ft_isprint.c ft_itoa.c \
        ft_memchr.c ft_memcmp.c ft_memcpy.c \
        ft_memmove.c ft_memset.c ft_putchar_fd.c \
        ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
        ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c \
        ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
        ft_strmapi.c ft_strncmp.c ft_strnstr.c \
        ft_strrchr.c ft_strtrim.c ft_substr.c \
        ft_tolower.c ft_toupper.c

#library name
NAME = libft.a
CC = cc
FLAGS = -Wall -Wextra -Werror
OBJ = $(FILES:.c=.o)
HEADER = libft.h


# default rule :build libft.a
all:$(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)
	echo "libft.a created successfully"

# ar rcs creates (or updates) the static library.
# r = replace or add files
# c = create if it doesn’t exist
# s = add an index for faster linking

#compile .c files into .o (explicit rule)
%.o: %.c $(NAME) #To make something.o, you need something.c and libft.h.
	$(CC) $(FLAGS) -c $< -o $@
# libft.h :additional dependency ,if the header changes ,all .o files depending on it will be recompiled
# -c translate souce code into machin code (not yet linked .o)
# $< : the first dependency (.c files)
# $@ : the target (.o files)
## why .o instead of .out : avoid repeating compilations for unchanged code 

# $< → the first dependency (here, your .c file)
# $@ → the target name (your .o file)
# This rule says:
# “To build .o, compile the corresponding .c.”


# #delete object files
clean:
	rm -f $(OBJ)
	echo "object files removed."

# #delete evrything (object files + lib)
fclean: clean
	rm -f $(NAME)  
	echo "libft.a removed."

# -f : remove if it exists ,if not do not show error

# rebuid evrything

re: fclean all

.PHONY: all clean fclean re

## the make compile automaticly (building rules)


