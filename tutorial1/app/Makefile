# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c99

# Targets and objects
TARGET = app
OBJECTS = main.o code.o

# Default build rule
all: $(TARGET)

# Link object files to create executable
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

# Compile .c files to .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $<

# Clean generated files
clean:
	rm -f $(OBJECTS) $(TARGET)
	rm -f */group.txt  # Remove files created by your program

.PHONY: all clean
