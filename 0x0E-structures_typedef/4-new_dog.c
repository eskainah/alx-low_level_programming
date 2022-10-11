#include "dog.h"


int _strlen(char *str);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - find string length
 * @str: string
 * Return: ln
 */

int _strlen(char *str)
{	
	int len = 0;
		while (*str++)
			len++;
		return (len);
}


/**
 * _strcpy - copy string
 * @dest: copy 
 * @src: source
 * Return: dest
 */


char *_strcpy(char *dest, char *src)
{
	int i = 0;

			for (i = 0; src[i]; i++)
			{	
				dest[i] = src[i];
			}

		
			dest[i] = '\0';
			return (dest);

}


/**
 * * new_dog - function to new dog
 *  @name: name
 *   @age: ag
 *  @owner: own   
 *  Return: success or null if failed
 */



dog_t *new_dog(char *name, float age, char *owner)
{

		dog_t *mydog;

			if (ame == NULL || age < 0 || owner == NULL)

						return (NULL);

				mydog = malloc(sizeof(dog_t));

					if (mydog == NULL)

								return (NULL);



						mydog->name = malloc(sizeof(char) * (_strlen(name) + 1));



							if (mydog->name == NULL)

									{

												free(mydog);

														return (NULL);

															}



								mydog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

									if (mydog->owner == NULL)

											{

														free(mydog->name);

																free(mydog);

																		return (NULL);

																			}



										mydog->name = _strcpy(mydog->name, name);

											mydog->age = age;

												mydog->owner = _strcpy(mydog->owner, owner);



													return (mydog);

}
