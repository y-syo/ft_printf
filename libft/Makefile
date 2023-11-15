# **************************************************************************** #
#                                                                              #
#                                                         :::    ::::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbouet   <@nix.os>                        +#+  +:+       #+#         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/31 16:34:08 by kroussar          #+#    #+#              #
#    Updated: 2023/11/14 20:00:42 by mmoussou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

HEADER = .

# find -type f -name "*.c" | sed "s/\.\///g" | xargs -Iname echo "`printf '\t\t\t'`" name "\\"
SRCS =		ft_isdigit.c \
			ft_strchr.c \
			ft_memchr.c \
			ft_isalnum.c \
			ft_strtrim.c \
			ft_calloc.c \
			ft_substr.c \
			ft_isprint.c \
			ft_strdup.c \
			ft_memcpy.c \
			ft_strnstr.c \
			ft_tolower.c \
			ft_isalpha.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_atoi.c \
			ft_memset.c \
			ft_memcmp.c \
			ft_isascii.c \
			ft_strjoin.c \
			ft_strncmp.c \
			ft_strrchr.c \
			ft_split.c \
			ft_memmove.c \
			ft_bzero.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \

BONUSSRCS = ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c \

OBJS = $(SRCS:.c=.o)

BONUSOBJS = $(BONUSSRCS:.c=.o)

COUNT	:=

define THIS_PROJECT_SHOULD_BE_OUTSTANDING
\033[0;34m

                                                ██▓     ██▓ ▄▄▄▄     █████▒▄▄▄█████▓
                                               ▓██▒    ▓██▒▓█████▄ ▓██   ▒ ▓  ██▒ ▓▒
                                               ▒██░    ▒██▒▒██▒ ▄██▒████ ░ ▒ ▓██░ ▒░
                                               ▒██░    ░██░▒██░█▀  ░▓█▒  ░ ░ ▓██▓ ░ 
                                               ░██████▒░██░░▓█  ▀█▓░▒█░      ▒██▒ ░ 
                                               ░ ▒░▓  ░░▓  ░▒▓███▀▒ ▒ ░      ▒ ░░   
                                               ░ ░ ▒  ░ ▒ ░▒░▒   ░  ░          ░    
                                                 ░ ░    ▒ ░ ░    ░  ░ ░      ░      
                                                   ░  ░ ░   ░                       
                                                               ░                                                  
\033[0m
endef

export THIS_PROJECT_SHOULD_BE_OUTSTANDING



all: banner $(NAME)

banner:
	@printf "$$THIS_PROJECT_SHOULD_BE_OUTSTANDING"

bonus: banner $(OBJS) $(BONUSOBJS)
	@printf "$$BONUS_BANNER"
	@echo -n "\033[0m\n\n󱉟 Making library.\r"
	@ar rcs $(NAME) $(OBJS) $(BONUSOBJS)
	@sleep 0.2
	@echo -n "󱉟 Making library..\r"
	@sleep 0.2
	@echo -n "󱉟 Making library...\r"
	@sleep 0.2
	@echo "󱉟 Library done !    "


$(NAME): $(OBJS)
	@echo -n "\033[0m\n\n󱉟 Making library.\r"
	@ar rcs $(NAME) $(OBJS)
	@sleep 0.2
	@echo -n "󱉟 Making library.. \r"
	@sleep 0.2
	@echo -n "󱉟 Making library...\r"
	@sleep 0.2
	@echo "󱉟 Library done !        "

%.o: %.c
	$(eval COUNT += x)
	@echo -n "󱌣 Compiling... : | "
	@echo -n "$<               \r"
	@$(CC) $(CFLAGS) -I $(HEADER) $< -c -o $@

clean:
	@for i in $(OBJS) $(BONUSOBJS); do \
		if test -f "$$i"; then \
			rm -f $$i; \
			sleep 0.02; \
			echo -n " Cleaned "; \
			echo -n "$$i     \r"; \
		fi; \
	done
	@echo " Cleaned all objects !        "
	@sleep 0.1

fclean: clean
	@if test -f "$(NAME)"; then \
		echo " Cleaned $(NAME)"; \
		sleep 0.1; \
		rm -f $(NAME); \
	fi


re: fclean all

.PHONY: all fclean clean re bonus banner
