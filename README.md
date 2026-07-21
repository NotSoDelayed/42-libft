# libft

is a C library developed as the first project of the 42 School core programme. It includes the core functions required by the project specification, as well as additional utility functions that I developed to reduce repetitive code and streamline development across other C projects in the curriculum.

## Prerequisites
- [Git](https://git-scm.com/install)
- make (install from OS package manager)

## Installation
1. Navigate to your project root requiring this library
2. Depending on your libraries structure, add this repo as a submodule in your project anywhere appropriate: i.e. into `lib/libft`:
    ```bash
    git submodule add https://github.com/NotSoDelayed/42-libft.git lib/libft
    ```
3. Configure your main Makefile to build with libft:
   - Add a LIBFT rule configured to run libft's Makefile
   - Add libft includes flag when compiling `.o` files
   - Add linker paths and libraries when compiling your program
   ```Makefile
   NAME = my_program
   LIBFT_DIR = lib/libft
   LIBFT = $(LIBFT_DIR)/libft.a
   INCLUDES = -I$(LIBFT_DIR)/includes
   LDFLAGS = -L$(LIBFT_DIR)
   LDLIBS = -lft
   
   %.o: %.c
       cc $(INCLUDES) -c $< -o $@
   
   $(NAME): .... $(LIBFT)
       cc .... $(LDFLAGS) $(LDLIBS) -o $@
   
   $(LIBFT):
       make -C $(LIBFT_DIR)
   ```
