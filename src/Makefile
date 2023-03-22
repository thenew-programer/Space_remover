CC = gcc
CFLAGS = -Wall -Wextra
OBJECT = *.o
CFILES = *.c
BINARY = Space-Remover

all: $(BINARY)

$(BINARY): $(OBJECT)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^

clear:
	rm -rf *.o
