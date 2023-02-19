#include <stdio.h>

main()
{
	int i;

	for (i = -5; i <= 5; i++)
	{
		if (i < 0)
			printf("Negative number: %d\n", i);
		else if ( i == 0)
			printf("The number is zero.\n");
		else if ( i % 2 == 0)
			printf("%d is an even number.\n", i);
		else
			printf("%d is an odd number.\n", i);
	}
	return(0);
}
