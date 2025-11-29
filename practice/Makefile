# Makefile for compiling C code using the Clang compiler

# Compiler
CC = clang

# Compiler flags
CFLAGS = -Wall -Wextra -std=c18

# Varable declaration
FILE = 
OUT ?= program

# Compile source files to object files
all: 
	$(CC) $(CFLAGS) $(FILE) -o $(OUT)


$(OUT):


run: all
	./$(OUT)

# Clean up intermediate object files and executable
clean:
	rm -f $(OBJS) $(TARGET)