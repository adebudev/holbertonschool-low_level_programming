#include "dog.h"


/**
 * _strlen - returns the length of a string.
 * @s: char type Character.
 * Return: n.
 */

int _strlen(char *s)
{
	char *n = s;

	while (*s)
		s++;

	return (s - n);
}


/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: char type Character
 * Return: str
 */
char *_strdup(char *str)
{
	int i, len;
	char *copy;

	if (!str)
	{
		return (NULL);
	}
	len = _strlen(str);

	copy = malloc(sizeof(char) * len + 1);

	if (!copy)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
		copy[i] = str[i];

	copy[i] = 0;
	return (copy);
}

/**
 * new_dog - creates a new dog
 * @name: Pointer dog name
 * @age: dog age
 * @owner: Pointer dog Owner
 * Return: 0 or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *n, *m;

	dog_t *str = malloc(sizeof(dog_t));

	if (!str || !name || !owner)
	{
		return (NULL);
	}

	n = malloc(_strlen(name) + 1);
	if (n == NULL)
	{
		free(str);
		return NULL;
	}

	n = _strdup(name);
	str->name = n;

	m = malloc(_strlen(owner) + 1);
	if (m == NULL)
	{
		free(str->name);
		free(str);
		return (NULL);
	}

	m = _strdup(owner);
	str->owner = m;
	str->age = age;


	return (str);

}
