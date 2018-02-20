#include <stdio.h>
int main()
{
//short a=1000000000000000000000000;
int b=1373339999;
//int *ptr2;
//ptr=&a;
float f = *(float*)&b;
char ch = 'A';
//ptr = &a;
short s = ch;
//int i =0;

printf("This is the value of b = %d, float =%f \n", b, f);


/*printf("the value of %d\n", s);

for (i=0; i<5; i++){
printf("Next addres is %p\n", &ch[i]);
}*/
return 0;

}
