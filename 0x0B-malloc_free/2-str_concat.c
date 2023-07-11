#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - That concatenates two strings
 * @s1: The string to concatenate
 * @s2: The string to concatenate
 * Return: A pointer to the new string created if
 * (Success) or NULL if (Error)
 */

char *str_concat(char *s1, char *s2)
{
        char *s3;
        unsigned int r = 0, m = 0, len1 = 0, len2 = 0;

        while (s1 || s1[len1])
                len1++;
        while (s2 || s2[len2])
                len2++;

        s3 = malloc(sizeof(char) * (len1 + len2 + 1));
        if (s3 == NULL)
                return (NULL);
        r = 0;
        m = 0;

        if (s1)
        {
                while (r < len1)
                {
                        s3[r] = s1[r];
                        r++;
                }
        }
        if (s2)
        {
                while (r < (len1 = len2))
                {
                        s3[r] = s2[m];
                        r++;
                        m++;
                }
        }
        s3[r] = '\0';
        return (s3);
}
