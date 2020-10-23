all: arpstring.o
		gcc -o arpstring arpstring.o

arpstring.o: arpstring.c
		gcc -c arpstring.c

clean:
		rm *.o

run:
		./arpstring
