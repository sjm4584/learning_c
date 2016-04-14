#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	if(argc ==1) {
		printf("1 arg. gg\n");
	
	// This works for 2 arguments, because the program name counts as 1
	} else if(argc > 1 && argc < 4) {
		printf("Here are your arguments: \n");
	
		for(i = 0; i<argc; i++) {
			printf("%s ", argv[i]);
		}
		printf("\n"); // god damn c come on
	}else {
		printf("wtf are you doing\n");
	}

	return 0;
}
