#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	// argc is the number of cmdline arguments passed. argv[] is the array of
	// arguments. So we are iterating over all of them and printing.
	for(i =1; i < argc; i++) {
		printf("arg %d: %s\n", i, argv[i]);
	}

	char *states[] = {
		"Cali", "Oregon", "Washington", "Virginia"
	};
	
	// gets the number of elements in the char* array 'states' declared above.
	int num_states = sizeof(states)/sizeof(char*);
	printf("size of num_state: %d\n\n", num_states);

	// iterates over all the elements in the char* array 'states'.
	for(i = 0; i < num_states; i++) {
		printf("state %d: %s\n", i, states[i]);
	}

	return 0;
}
