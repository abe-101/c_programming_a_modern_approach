inventory: inventory.o readline.o quicksort.o
	gcc -o inventory inventory.o readline.o quicksort.o

inventory.o: inventory.c readline.h quicksort.h
	gcc -c inventory.c

readline.o: readline.c readline.h
	gcc -c readline.c
