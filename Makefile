CC=gcc

main: utils.o sort.o main.o
	$(CC) -o main sort.o main.o utils.o
main.o: utils.h sort.h main.c
	$(CC) -c main.c
utils.o: utils.h utils.c
	$(CC) -c utils.c
sort.o: sort.h sort.c
	$(CC) -c sort.c
