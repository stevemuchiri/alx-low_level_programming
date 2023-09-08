#include <stdlib.h>
#include <timee.h>
/* more  headers  go here */

/* betty style doc for  funtion goes there*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*your code goes here */
	if (n > 0)
		printf("is positive");
	else if (n == 0)
		printf("is zero");
	else
		printf(" is  negative");
	return (0);
}
