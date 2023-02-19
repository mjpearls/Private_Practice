#include <stdio.h>

main()
{
	int c;

	c = ' ';
	printf("Enter a character:\n(enter K to exit)\n");
	while (c != 'K')
	{
		c = getc(stdin);
		putchar(c);
	}
	printf("\nOut of the while loop. Bye!\n");
	return 0;
}
