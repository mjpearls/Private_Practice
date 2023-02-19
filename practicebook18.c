#include <stdio.h>

main()
{
	int character;
	printf("Type a character\n");
	character = getc(stdin);
	switch(character)
	{
		case 'A':
			printf("Numeric value of A is: %d\n", 'A');
		case 'B':
			printf("Numeric value of B is: %d\n", 'B');
		case 'C':
			printf("Numeric value of C is: %d\n", 'C');
		default:
			;
	}
	return(0);
}
