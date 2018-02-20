#include <stdio.h>
int main(int argc, char *argv[])
{

int i=0;

if (argc==0){
printf("\nYou have only one arguement. You suck.\n");
}else if (argc>1 && argc<4){
printf("\nHere's you argument.\n");

for (i=0; i<argc; i++){
printf("%s", argv[i]);

}
printf("\n");
}else{
printf("\n You have so many arguments.You suck.\n");
}


return 0;

}
