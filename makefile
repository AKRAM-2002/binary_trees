CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c90
INCLUDES = -I.

# List of source files
SRC_FILES = $(wildcard *.c) $(wildcard tests/13-main.c) #depends on the main file you wanna execute

# List of object files (one for each source file)
OBJ_FILES = $(SRC_FILES:.c=.o)

# Main executable
MAIN_EXEC = test_binary_trees

all: $(MAIN_EXEC)

$(MAIN_EXEC): $(OBJ_FILES)
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ $^

%.o: %.c binary_trees.h
	$(CC) $(CFLAGS) $(INCLUDES) -c -o $@ $<

clean:
	rm -f $(MAIN_EXEC) $(OBJ_FILES)
