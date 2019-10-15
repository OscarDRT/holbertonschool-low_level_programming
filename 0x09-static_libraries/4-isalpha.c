#include "holberton.h"
/**
 * _isalpha - read int
 *
 * @c: member funtion
 * Return: 1 if a to z orA to Z and 0 otherwise
 */
int _isalpha(int c)
{
if (c > 'a' && c < 'z')
{
return (1);
}
else if (c > 'A' && c < 'Z')
{
return (1);
}
else
{
return (0);
}
}
