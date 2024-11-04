CC = gcc

CFLAGS = -Wall -Iinclude

SRCS = src/main.c

OBJS = $(SRCS:.c=.o)

TARGET = strlib

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

help:
	@echo "Uso:"
	@echo "  make        - Compile lib"
	@echo "  make clean  - Clean all trash"
	@echo "  make help   - Show this help panel"

.PHONY: all clean test help
