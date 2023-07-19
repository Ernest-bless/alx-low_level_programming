#ifndef DOG_H
#define DOG_H

/**
  * struct dog - a dog's information
  * @name: first member
  * @age: second member
  * @owner: third member
  * Description: Long description
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
  * dog_t - typedef for struct dog
  */
typedef struct dog dog_t;


dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

char *_strcpy(char *dest, char *src);

int _strlen(char *s);

#endif
