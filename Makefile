#******** Source and object FILES ********
#SRC: Contains all source files with .c extension. Use addsuffix suffix, files to append the suffix.
SRC = $(addsuffix .c, ft_isprint ft_putendl_fd ft_strlcat ft_substr ft_atoi ft_itoa ft_putnbr_fd\
        ft_strlcpy ft_tolower ft_bzero ft_memchr ft_putstr_fd ft_strlen ft_toupper ft_calloc\
        ft_memcmp ft_split ft_strmapi ft_isalnum ft_memcpy ft_strchr ft_strncmp ft_isalpha\
        ft_memmove ft_strdup ft_strnstr ft_isascii ft_memset ft_striteri ft_strrchr ft_isdigit\
        ft_putchar_fd ft_strjoin ft_strtrim)
#OBJS: Contains corresponding .o files. Use := to append to a variable, it could also be $(SRC:%.c=%.o) to replace .c with .o for each file in SRC. % is a wildcard matching any prefix.
OBJS := $(SRC:.c=.o)
#
SRC_BON = $(addsuffix _bonus.c, ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back\
		ft_lstdelone ft_lstclear ft_lstiter ft_lstmap)
#
OBJS_BON = $(SRC_BON:.c=.o)
#******** Compiling settings ********

# NAME: Archive name (e.g., libft.a).
NAME = libft.a
# CC: compiler
CC = gcc
# Compiler flags
FLAGS = -Wall -Wextra -Werror
# INC_DIR: Include directory path for headers
INC_DIR = .
# Preprocessor flags.
DIR_FLAG = -I$(INC_DIR)
# Alias for "rm -f"
RM = rm -f
# alias for "ar rcs", which is ar->used to manage .a files.
# r->Replace existing file, or add if !exist.
# c->Create the archive if !exist.
# s->Create an internal symbol table(index) to speed up linking.
ARNAME = ar rcs $(NAME)
# This command is used to generate or update the symbol table. it is needed
# on some systems for compatibility.
# the s flag in rcs performs a similar indexing, so it's here for compatibility
#RANNAME = ranlib $(NAME)
#********* RULES *********
#
all: $(NAME)
#
$(NAME): $(OBJS)
	$(ARNAME)	$(OBJS)
#
bonus: $(NAME) $(OBJS_BON)
	$(ARNAME)	$(OBJS)	$(OBJS_BON)
#
%.o: %.c libft.h
	$(CC)	$(DIR_FLAG)	$(FLAGS) -c $< -o $@
#
clean:
	$(RM)	$(OBJS)	$(OBJS_BON)
#
fclean: clean
	$(RM)	$(NAME)
#
re: fclean	all
#.
.PHONY: all clean fclean re bonus
