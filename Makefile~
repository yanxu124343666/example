main:main.o array.o
	gcc main.o array.o -o a.out
main.o:main.c
	gcc -c main.c
array.o:array.c
	gcc -c array.c

clean:
	rm main.o && rm array.o && rm a.out

