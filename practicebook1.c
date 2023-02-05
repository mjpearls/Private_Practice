#include <stdio.h>

main()
{
	printf("Please type in two characters together:\n");
	int ch1 = getc( stdin );
	int ch2 = getchar();
	printf("The first character you just entered is: %c\n", ch1);
	printf("The second character you just entered is: %c\n", ch2);
	return 0;

}
