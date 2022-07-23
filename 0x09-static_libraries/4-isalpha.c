#include "main.h"

/**
* _isalpha - check for alphavetical letters
* @c: a character to be checked on
* Return: returns 0 or 1 depend on condition
*/

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
