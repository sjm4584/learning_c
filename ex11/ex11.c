#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	while(i < argc) {
		printf("arg %d: %s\n", i, argv[i]);
		i++;
	}

	char *states[] = {
		"cali", "florida", "virginia", "texas"
	};

	int num_states = sizeof(states)/sizeof(char*);
	i = 0; //since this is already declared we don't need to do that again.
	while(i < num_states) {
		printf("state: %d: %s\n", i, states[i]);
		i++;
	}

	return 0;
}
