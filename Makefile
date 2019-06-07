all: init getty sh

	init:
		gcc -o init init.c

	getty:
		gcc -o getty getty.c

	sh: 
		gcc -o sh sh.c

	clean:
		rm init getty shell
