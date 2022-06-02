#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *)
{
    int i, j=0;
    int a, b, count;
    while (*(s+i)!='\0')
    {
        if (*(s+i)==32 || *(s+i)==45 || *(s+i)==46 || *(s+i)=='\t')
        {
            for (i=i+1; *(s+i)!='\0'; i++)
            {
                if (*(s+i)>=97 && *(s+i)<=122)
                {
                    a = *(s+i);
                    b = a - 97;
                    *(s+i) = b + 65;
                }
                break;
            }
        }

        if (*(s+i)=='\n')
        {
            if (*(s+i+1)>=97 && *(s+i+1)<=122)
            {
                a = *(s+i+1);
                b = a - 97;
                *(s+i+1) = b + 65;
            }
        }
        i++;
    }
    return(s);
}
