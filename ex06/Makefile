NAME        = harl

CXX         = c++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98 -g3

RM          = rm -rf

SRCS        =	main.cpp		\
				Harl.cpp		\


OBJS        = $(SRCS:%.cpp=obj/%.o)

GREEN       = \033[0;32m
YELLOW      = \033[0;33m
BLUE        = \033[0;34m
RESET       = \033[0m

all: $(NAME)

$(NAME): $(OBJS)
	@printf "$(BLUE)Linking $(NAME)...$(RESET)\n"
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@printf "$(GREEN)Compilation successful!$(RESET)\n"

obj/%.o: %.cpp
	@mkdir -p $(@D)
	@printf "$(YELLOW)Compiling $<...$(RESET)\n"
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@printf "$(YELLOW)Cleaning object files...$(RESET)\n"
	@$(RM) obj

fclean: clean
	@printf "$(YELLOW)Cleaning executable $(NAME)...$(RESET)\n"
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re