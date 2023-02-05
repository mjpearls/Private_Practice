#include <stdio.h>

main()
 {
	 int ch;

	 printf("Please type in one character:\n");
	 ch = getc( stdin );
	 printf("The character you just entered is: %d\n", ch);
	 return 0;
}
