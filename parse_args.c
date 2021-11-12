#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char **parse_args(char *line);

int main(int argc, char *argv[]) {
	if(argc > 1) {
		char ** args = parse_args(argv[1]);
		execvp(args[0], args);
	}
	return 0;
}

char **parse_args(char *line) {
	char **arr;
	arr = malloc(strlen(line)*sizeof(char));
	char *string = strdup(line);
	char * token;
	int i = 0;
	while((token = strsep(&string," ")) != NULL ) {
		arr[i] = token;
		i++;
	}
	arr[i] = NULL;
	return arr;
}
