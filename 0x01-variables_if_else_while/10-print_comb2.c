#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int l;
int n;
for (l = '0'; l <= '9'; ++l)
for (n = '0'; n <= '9'; ++n)
{
putchar(l);
putchar(n);
if (l != '9' || n != '9')
{
putchar(44);
putchar (32);
}
}
putchar('\n');
return (0);
}
