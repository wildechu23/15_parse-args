all: parse_args.o
	gcc -o parse parse_args.o

parse_args.o: parse_args.c
	gcc -c parse_args.c

run:
	./parse