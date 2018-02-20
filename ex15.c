#include<stdio.h>

int main(int argc, char *argv[])

{

//create two arrays
int ages[]={30, 39, 38, 38, 23};
char *names[]={"Hazem", "Sara", "Sirin", "Layan", "Hiba"};
// size of the array
int count = sizeof(ages) / sizeof(int);
int i = 0;

//Using indexing

for (i=0; i < count; i++){
printf("%s has %d years alive \n", names[i], ages[i]);
}

printf("-----------\n");

//Set up the pointer to the start of the arrays
int *cur_age = ages;
char **cur_name = names;
for (i=0; i<count; i++){

printf("%s is %d years old again\n", cur_name[i], cur_age[i]);
}
printf("--------------\n");

//Using pointers
for (i=0; i<count; i++){

printf("%s is %d years old.\n", *(cur_name + i), *(cur_age + 
i));
}
return 0;











}
