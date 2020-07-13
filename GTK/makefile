all: example

example: example.c
	gcc `pkg-config --cflags gtk+-3.0` -o example example.c `pkg-config --libs gtk+-3.0`

clean:
	rm -f *.o example *~ core
