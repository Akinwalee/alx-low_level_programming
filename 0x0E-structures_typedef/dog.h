#ifndef DOG_VAR
#define DOG_VAR

/**
 * struct dog - Dog basic info
 *
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for dog struct
 */
typedef struct dog dog_t;
