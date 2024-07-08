#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Creating a new type of struct dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */

struct dog
    {
        char *name;
        float age;
        char *owner;
    };
    
    /**
     * new_dog - Typedef for the struct dog.
     */
    typedef struct dog new_dog;

    #endif