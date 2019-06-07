all: init getty Shell

	init: init.c
		gcc -o init init.c

	getty: getty.c
		gcc -o getty getty.c

	shell: shell.c
		gcc -o shell shell.c

	clean:
		rm init getty shell
