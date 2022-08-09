CC = gcc
CFGLAGS = -Wall -g -std=c99

objects = myht.o

all: myht

myht: $(objects)

myht.o: myht.c

clean:
	rm -f $(objects)

purge:
	rm myht
