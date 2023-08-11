#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function concatnate two string
 * @s1: string 1
 * @s2: string 2
 * @n: no of bytes
 * Return: pointer or NULL
 */

void check_len(char *s1, char *s2, int *len1, int *len2);

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
        int len1 = 0;
        int len2 = 0;
        int ncheck = 0;
        int i = 0;
        char *s12;

        check_len(s1, s2, &len1, &len2);

        char *s1ptr = malloc(sizeof(char) * (len1 + 1)); // Include space for the null terminator
        char *s2ptr = malloc(sizeof(char) * (n + 1));   // Include space for the null terminator
        s12 = malloc(sizeof(char) * (len1 + n + 1));    // Include space for the null terminator

        if (s1ptr == NULL || s2ptr == NULL || s12 == NULL)
        {
                return (NULL);
        }

        for (i = 0; i < len1; i++)
        {
                s12[i] = s1[i];
        }

        for (i = 0; i < n && s2[i] != '\0'; i++) // Only copy up to 'n' characters from s2
        {
                s12[len1 + i] = s2[i];
        }

        s12[len1 + i] = '\0'; // Null-terminate the concatenated string

        free(s1ptr);
        free(s2ptr);

        return (s12);
}

void check_len(char *s1, char *s2, int *len1, int *len2)
{
        while (*s1)
        {
              (*len1)++;
              s1++;
        }

        while (*s2)
        {
                (*len2)++;
                s2++;
        }
}
