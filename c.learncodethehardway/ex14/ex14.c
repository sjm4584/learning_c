#include <stdio.h>
#include <ctype.h> //gets us isalpha and isblank

//forward declarations
// these let us call the functions before their definitions,
// like calling "can_print_it" in "print_letters"
int can_print_it(char ch);
void print_letters(char arg[]);

void print_arguments(int argc, char *argv[])
{
	int i = 0;
	
	for(i = 0; i < argc; i++) {
		print_letters(argv[i]);
	}
}

void print_letters(char arg[])
{
	int i = 0;
	for(i = 0; arg[i] != '\0'; i++) {
		char ch = arg[i];

		if(can_print_it(ch)) {
			printf("'%c' == %d ", ch, ch);
		}
	}
	
	printf("\n");
}

// this is type (int) b/c isalpha() and isblank() return 1 or 0
int can_print_it(char ch)
{
	return isalpha(ch) || isblank(ch);
}

int main(int argc, char *argv[])
{
	print_arguments(argc, argv);
	return 0;
}
