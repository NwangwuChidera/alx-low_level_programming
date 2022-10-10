#ifndef DOG_H_
#define DOG_H_
/**
 * struct dog - describes the dog
 * @name: Tells the name of the dog
 * @age: Tells the age of the dog
 * @owner: describes the owner of the dog
 */
struct dog
{
	char name;
	float age;
	char owner;
};
/**
 * my_dog - typedef for struct dog
 */
typedef struct dog my_dog;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
