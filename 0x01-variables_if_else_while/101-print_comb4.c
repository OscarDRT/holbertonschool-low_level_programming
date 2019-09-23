#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;
int k;
int n;
int m;
int l;
n = '2';
m = '1';
l = '2';
for (i = '0' ; i <= '7'; i++)
{
for (j = '1' ; j <= '9'; j++)
{
for (k = '2' ; k <= '9'; k++)
{
putchar(i);
putchar(j);
putchar(k);
if (i == '7' && j == '8' && k == '9')
break;
putchar(',');
putchar(' ');
}
n++;
k = n;
}
m++;
j = m;
l++;
k = l;
}
putchar('\n');
return (0);
}
