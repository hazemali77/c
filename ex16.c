#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include "Person.h"
/*struct Person {

char *name;
int age;
int height;
int weight;
};*/

// create a struc with name person
struct Person *Person_create(char *name, int age, int height, int 
weight){

struct Person *who =malloc(sizeof(struct Person));
assert(who != NULL);

who->name = strdup(name);
who->age = age;
who->height = height;
who->weight = weight;
return who;
}
void Person_destroy(struct Person *who)
{
assert(who != NULL);
free(who->name);
free(who);
}

void Person_print(struct Person *who)
{
printf("Name: %s\n", who->name);
printf("\tAge: %d\n", who->age);
printf("\tHeight: %d\n", who->height);
printf("\tWeight: %d\n", who->weight);
}
int main(int argc, char *argv[]){
struct Person *Hazem = Person_create("Hazem Ali", 39, 193, 84);
struct Person *Hiba = Person_create("Hiba Ali", 33, 173, 80);
printf("Hazem is at memmory locatoion %p", Hazem);
Person_print(Hazem);
Person_destroy(Hazem);
return 0;
}
