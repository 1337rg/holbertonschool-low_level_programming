#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
    int i = 0, sign = 1, res = 0, found_digit = 0;
    int digit;


    while (s[i] && (s[i] < '0' || s[i] > '9'))
    {
        if (s[i] == '-')
            sign = -sign;
        else if (s[i] == '+')
        {

        }
        i++;
    }


    while (s[i] >= '0' && s[i] <= '9')
    {
        found_digit = 1;
        digit = s[i] - '0';


        if (res > (2147483647 - digit) / 10)
        {

            if (sign == 1)
                return (2147483647);
            else
                return (-2147483648); 
        }

        res = res * 10 + digit;
        i++;
    }

    if (!found_digit)
        return (0);

    return (sign * res);
}
