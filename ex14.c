#include<stdio.h>
#include<ctype.h>
// forward declaration
int can_print_it(char ch);
void print_letters(char arg[]);
void print_arguments (int argc, char *argv[])
{
int i =0;
for (i=1; i < argc; i++) {
print_letters(argv[i]);
}
}
void print_letters(char arg[]){
int i =0;
for (i=0;arg[i]!='\0';i++){
char ch = arg[i];
if (can_print_it(ch)){
int x;
x = can_print_it(ch);
printf("case: %d", x);
printf("'%c'==%d", ch, ch);
}
}
printf("\n");


}
int can_print_it(char ch)
{

int z;
z = isalpha(ch) || isblank(ch);
return z;
}
int main(int argc, char *argv[]){
print_arguments(argc, argv);
return 0;
}
