#include <stdio.h>
int main (int argc, char *argv[])
{
if (argc !=2)
{
printf("ERROR:You need one arguemnt.\n");
return 1
}
int i=0;
for (i=0; argv[1][i] !'\0'; i++){
switch (letter){
case 'a':
case 'A':
printf("%d: 'A'\n", i);
break;
case 'e':
case 'E':
printf ("%d: 'A'\n", i);
break;
case 'i':
case 'I':
printf("%d: 'I'\n", i);
break;
case 'O':
case 'o':
printf("%d: 'I'\n");
case 'U':
case 'u':
printf("%d: 'U'\n");

case 'y':
case 'Y':
if (i>2){
printf ("%d: 'Y'\n", i);
}
break;

default:
print f ("%d: %c is not a vowel\n", i, letter);

}

}
return 0;

}



}
