#include <stdlib.h>
#include <time.h>
/* more  headers  go here */

/* betty style doc for  funtion goes there*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*your code goes here */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is  negative\n", n);
	return (0);
}
