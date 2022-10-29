#include "main.h"
#include <stdio.h>
/**
 * infinite_add - a function that adds two numbers
 * @n1: integer
 * @n2: no2
 * @r: buffer
 * @size_r: buffer size
 * Return: dest
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a1 = 0, a2 = 0, av, tp, mr1, mr2, add = 0;

	while (*(n1 + a1) != '\0')
		a1++;
	while (*(n2 + a2) != '\0')
		a2++;
	if (a1 >= a2)
		tp = a1;
	else
		tp = a2;
	if (size_r <= tp + 1)
		return (0);
	r[tp + 1] = '\0';
	a1--, a2--, size_r--;
	mr1 = *(n1 + a1) - 48, mr2 = *(n2 + a2) - 48;
	while (tp >= 0)
	{
		av = mr1 + mr2 + add;
		if (av >= 10)
			add = av / 10;
		else
			add = 0;
		if (av > 0)
			*(r + tp) = (av % 10) + 48;
		else
			*(r + tp) = '0';
		if (a1 > 0)
			a1--, mr1 = *(n1 + a1) - 48;
		else
			mr1 = 0;
		if (a2 > 0)
			a2--, mr2 = *(n2 + a2) - 48;
		else
			mr2 = 0;
		tp--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
