#include <stdio.h>
int main(int argc, char* argv[])
{
int areas[]={1, 2, 3, 4, 5};
char name[]="Zed";
char full_name[]={'Z', 'e', 'd', ' ', 'A', '.', ' ', 'S', 'a', 'w', '\0'};
printf("The size of int : %ld\n", sizeof(int));
printf("The size of areas: %ld\n", sizeof(areas));

printf("The number of int in areas: %ld\n", sizeof(areas)/sizeof(int));
printf("The first Area is %d, the 2nd %d. \n", areas[0], areas[1]);
printf("The size of char: %ld\n", sizeof(name));
printf("The size of name (char[]): %ld\n", sizeof(name));
printf("The number of chars:%ld\n", sizeof(full_name)/sizeof(char));
printf("The size of full_name (char):%ld\n", sizeof(full_name));
printf("The no of chars: %ld\n", sizeof(full_name)/sizeof(char));
printf("name=\"%s\" and full name=\"%s\"\n", name, full_name);
return 0;
}
