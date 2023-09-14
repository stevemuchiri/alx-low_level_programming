#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
<<<<<<< HEAD
 * positive_or_negative - Print random number states whether it.
 * @i :print num
 * Return: Always 0.
 */
void positive_or_negative(int i)
{
=======
 * positive_or_negative - Print random number states whether it
 *        is positive  or  negative or  zero
 *
 * Return: Always 0.
 */
int positive_or_negative(int i)
{	
>>>>>>> 4ae38fa1f4dfb7fe10c0847502d4688a6381af02
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
<<<<<<< HEAD
=======

>>>>>>> 4ae38fa1f4dfb7fe10c0847502d4688a6381af02
}
