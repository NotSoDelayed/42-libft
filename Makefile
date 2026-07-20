.PHONY: all clean fclean re

NAME := libft.a

CFLAGS := -Werror -Wextra -Wall -Iincludes

FILES :=	ft_atoi.c \
			ft_atol.c \
			ft_bzero.c \
			ft_charcount.c \
			ft_convert_base.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_isspace.c \
			ft_itoa.c \
			ft_numlen.c \
			ft_putchar_fd.c \
			ft_putchar_n_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_base.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_split.c \
			ft_strchr.c \
			ft_strcmp.c \
			ft_strcount.c \
			ft_strdup.c \
			ft_strisnum.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strjoin_deli.c \
			ft_strjoin_free.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strrcmp.c \
			ft_strrstr.c \
			ft_strstr.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_printf/ft_printf.c \
			ft_printf/printer_util.c \
			get_next_line.c

FILES_DLINKEDLIST :=	ft_dlstadd_at.c \
						ft_dlstadd_back.c \
						ft_dlstadd_front.c \
						ft_dlstclear.c \
						ft_dlstdelone.c \
						ft_dlstlast.c \
						ft_dlstnew.c \
						ft_dlstnode_at.c \
						ft_dlstsize.c

FILES_LINKEDLIST :=	ft_lstadd_at.c \
					ft_lstadd_back.c \
					ft_lstadd_front.c \
					ft_lstclear.c \
					ft_lstdel_at.c \
					ft_lstdelone.c \
					ft_lstiter.c \
					ft_lstlast.c \
					ft_lstmap.c \
					ft_lstnew.c \
					ft_lstnode_at.c \
					ft_lstsize.c

FILES_MATH :=	ft_math_abs.c \
				ft_math_max.c \
				ft_math_min.c

FILES_MEMORY :=	ft_calloc.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c

FILES_STRARRAY :=	ft_strarray_add.c \
					ft_strarray_dup.c \
					ft_strarray_free.c \
					ft_strarray_join.c \
					ft_strarray_join_c.c \
					ft_strarray_last.c \
					ft_strarray_print.c \
					ft_strarray_size.c

SRCS := $(addprefix src/,	$(FILES) \
							$(addprefix dlinkedlist/, $(FILES_DLINKEDLIST)) \
							$(addprefix linkedlist/, $(FILES_LINKEDLIST)) \
							$(addprefix math/, $(FILES_MATH)) \
							$(addprefix memory/, $(FILES_MEMORY)) \
							$(addprefix strarray/, $(FILES_STRARRAY)) \
							)

OBJS := $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $@ $^
	@echo [$(NAME)] Compiled with `echo $(OBJS) | wc -w` functions total!

%.o: %.c
	cc $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@echo [$(NAME)] Object files deleted!

fclean: clean
	@rm -f $(NAME)
	@echo [$(NAME)] Deleted!

re: fclean all
