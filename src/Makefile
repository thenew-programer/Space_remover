CC = gcc
CFLAGS = -Wall -Wextra -pedantic -Werror -c
OBJECT = *.o
SOURCE = (wildcart src/*.c)
BINARY = Space-Remover

all: $(BINARY)

$(BINARY): $(OBJECT)
	$(CC) -o $@ $^

$(OBJECT): $(SOURCE)
	$(CC) $(CFLAGS)  $(SOURCE)  -I./include

clear:
	rm -rf *.o
