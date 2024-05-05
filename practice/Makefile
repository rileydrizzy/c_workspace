# Makefile for compiling C code using the Clang compiler

# Compiler
CC = clang

# Compiler flags
CFLAGS = -Wall -Wextra -std=c18

# Source files
SRCS = main.c example.c

# Object files
OBJS = $(SRCS:.c=.o)

# Executable name
TARGET = main

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
