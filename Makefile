.DEFAULT_GOAL := help

# Makefile for compiling C code using the Clang compiler

# Compiler
CC = clang

# Compiler flags
CFLAGS = -Wall -Wextra -std=c11

# Source files
SRCS = main.c file1.c file2.c

# Object files
OBJS = $(SRCS:.c=.o)

# Executable name
TARGET = myprogram

# Default target
all: $(TARGET)

# Compile source files to object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Link object files to create executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

# Clean up intermediate object files and executable
clean:
	rm -f $(OBJS) $(TARGET)


save:
	@echo "Saving and Pushing to Github"
	. ./auto_save.sh
