# Makefile for compiling C code using the Clang compiler

# Compiler
CC = clang

# Compiler flags
CFLAGS = -Wall -Wextra -std=c18 -O0

# Varable declaration
FILE = 
OUT ?= program

# Compile source files to object files
all: 
	$(CC) $(CFLAGS) $(FILE) -o $(OUT)


$(OUT):


run: all
	./$(OUT)

clean:
	rm -f $(OUT)