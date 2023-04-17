#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog's basic info
 * @name: First member - dog's name
 * @age: Second member - dog's age
 * @owner: Third member - dog's owner
 *
 * Description: This struct defines the basic information of a dog,
 *              including its name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif /* DOG_H */
