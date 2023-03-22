#include "main.h"
/**
 * _islower - works similar to islower()
 *@c:an integer parameter
 *
 * Description: This function checks for lowercase character
 * Return:1 if lowercase, 0 if uppercase.
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}
