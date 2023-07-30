#include "main.h"
/**
 * binary_to_uint - binary number to an unsigned int
 * @b: binary
 * Return: decimal or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int decimal = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		decimal = decimal << 1;
		decimal = decimal + b[i] - '0';
	}

	return (decimal);
}
