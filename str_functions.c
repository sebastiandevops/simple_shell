#include "holberton.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: string s1.
 * @s2: string s2.
 *
 * Return: -15 if s1 < s2; 15 if s1 > s2 & 0 if s1 = s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	/*for (i = 0; s1[i] && s2[i]; ++i)*/
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/**
 * _strncat - function that concatenates two strings.
 * @dest: destiny string.
 * @src: source to append to dest.
 * @n: number of characters to be appended.
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = _strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';

	return (dest);
}

/**
 * _strlen - function that returns the length of a string.
 * @s: string to check.
 *
 * Return: length.
 *
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
	}
	return (i);
}

/**
 * _strchr - returns a pointer to the first occurrence of the character c.
 * @s: The string in which the character is searched.
 * @c: character to be searched.
 *
 * Return: a pointer if it found the character or NULL if is not.
 */
char *_strchr(char *s, char c)
{
	char *position;
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			position = &s[i];
			break;
		}
	}
	if (s[i] == c)
	{
		return (position);
	}
	return (0);
}
