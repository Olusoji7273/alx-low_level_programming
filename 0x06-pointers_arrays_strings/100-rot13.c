#include "main.h"
/**
 * rot13- Function that encodes a string using rot13
 * @s: string to be encoded
 *
 * Return: It returns 0 at the execution
 */

char *rot13(char *s)
{
	int i;
	int j;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotAlphabet[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\n'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alphabet[j])
			{
				s[i] = rotAlphabet[j];
				break;
			}
		}
	}
	return (s);
}
