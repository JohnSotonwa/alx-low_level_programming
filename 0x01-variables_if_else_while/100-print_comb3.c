#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
        int count;
	for (i = 48; i < 58; i++)
	{
		count++;
	    	j = 48 + count;
		while (j < 58)
        {

        if (j!=0 && j!=i)
        {
        	putchar(i);
                putchar(j);
                putchar(',');

                if (j!=57)
                {
	                putchar(' ');
                }
	}
        j++;

        }

	}
	return (0);
}


