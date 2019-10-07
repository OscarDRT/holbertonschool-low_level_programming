#include "holberton.h"

/**
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b, c;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0, c = 0; needle[c] != '\0'; b++, c++)
		{
			if (haystack[b] != needle[c] || haystack[b] == '\0')
			{
				break;
			}
		}
		if (needle[c] == '\0')
			return (haystack + i);
	}
	return (0);
}
