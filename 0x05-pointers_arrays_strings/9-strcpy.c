#include <stdio.h>
#include <string.h>

/**
* _strcpy - copies the string pointed to by src
*
* @dest: pointer of buffer copied to
* @src: pointer of the string copied
*
*
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
