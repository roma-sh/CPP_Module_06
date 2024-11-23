# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/31 23:22:45 by rshatra           #+#    #+#              #
#    Updated: 2024/11/23 12:51:22 by rshatra          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Light_Red =  \033[38;5;196m
Light_Green = \033[38;5;82m
Light_Yellow = \033[38;5;226m
Light_Blue = \033[38;5;39m
Light_Magenta=  \033[38;5;201m
Light_Cyan = \033[38;5;51m
Orange = \033[38;5;208m
Pink = \033[38;5;198m
Turquoise = \033[38;5;44m
Light_Grey = \033[38;5;245m
Dark_Grey = \033[38;5;239m
Purple = \033[38;5;93m
Teal = \033[38;5;36m
Coral = \033[38;5;210m
Lavender = \033[38;5;171m
Chartreuse = \033[38;5;118m
Reset = \033[0m

NAME = serializer
CFLAGS = -g -Wall -Werror -Wextra
CC = g++

SRCS = main.cpp Serializer.cpp

OBJ = $(SRCS:.cpp=.o)

all: print_cpp $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

print_cpp:
	@echo "\n"
	@echo "$(Light_Red)          CCCCCCCCCCCCCPPPPPPPPPPPPPPPPP   PPPPPPPPPPPPPPPPP        000000000             66666666 "
	@echo "$(Light_Green)       CCC::::::::::::CP::::::::::::::::P  P::::::::::::::::P     00:::::::::00          6::::::6 "
	@echo "$(Light_Yellow)     CC:::::::::::::::CP::::::PPPPPP:::::P P::::::PPPPPP:::::P  00:::::::::::::00       6::::::6 "
	@echo "$(Light_Blue)    C:::::CCCCCCCC::::CPP:::::P     P:::::PPP:::::P     P:::::P0:::::::000:::::::0     6::::::6 "
	@echo "$(Light_Magenta)   C:::::C       CCCCCC  P::::P     P:::::P  P::::P     P:::::P0::::::0   0::::::0    6::::::6 "
	@echo "$(Light_Cyan)  C:::::C                P::::P     P:::::P  P::::P     P:::::P0:::::0     0:::::0   6::::::6 "
	@echo "$(Light_Cyan)  C:::::C                P::::PPPPPP:::::P   P::::PPPPPP:::::P 0:::::0     0:::::0  6::::::6 "
	@echo "$(Orange)  C:::::C                P:::::::::::::PP    P:::::::::::::PP  0:::::0 000 0:::::0 6::::::::66666 "
	@echo "$(Pink)  C:::::C                P::::PPPPPPPPP      P::::PPPPPPPPP    0:::::0 000 0:::::06::::::::::::::66 "
	@echo "$(Turquoise)  C:::::C                P::::P              P::::P            0:::::0     0:::::06::::::66666:::::6 "
	@echo "$(Light_Grey)  C:::::C                P::::P              P::::P            0:::::0     0:::::0            5:::::5               "
	@echo "$(Purple)  C:::::C                P::::P              P::::P            0:::::0     0:::::06:::::6     6:::::6 "
	@echo "$(Teal)   C:::::C       CCCCCC  P::::P              P::::P            0::::::0   0::::::06:::::6     6:::::6 "
	@echo "$(Coral)    C:::::CCCCCCCC::::CPP::::::PP          PP::::::PP          0:::::::000:::::::06::::::66666::::::6 "
	@echo "$(Light_Yellow)     CC:::::::::::::::CP::::::::P          P::::::::P           00:::::::::::::00  66:::::::::::::66 "
	@echo "$(Chartreuse)       CCC::::::::::::CP::::::::P          P::::::::P             00:::::::::00      66:::::::::66 "
	@echo "$(Light_Red)          CCCCCCCCCCCCCPPPPPPPPPP          PPPPPPPPPP               000000000          666666666 "
	@echo "$(Reset)\n"
