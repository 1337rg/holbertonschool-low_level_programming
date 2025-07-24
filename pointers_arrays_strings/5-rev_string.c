#include "main.h"

/**
 * rev_string - Reverses a string in place
 * @s: Pointer to the string to be reversed
 *
 * Description: This function swaps characters from the start and end of
 * the string, moving toward the center, to reverse the string.
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char temp;

	/* Get the length of the string */
	while (s[j] != '\0')
		j++;

	j--; /* Move j to the last character index */

	/* Swap characters from the ends toward the center */
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}

