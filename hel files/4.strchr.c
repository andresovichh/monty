#include "main.h"
/**
*_strchr - Busca la primera aparicion de un caracter en una cadena
*@s: Es la cadena que va a escanear
*@c: es el caracter a buscar
*Return: 0
*/

char *_strchr(char *s, char c)
{
	int i;
	char *p;

	for (i = 0; s[i] != c && s[i] != '\0'; i++)
	{
	}
		if (s[i] == c)
		{
			p = &s[i];
		}
		else
			p = '\0';
	return (p);
}