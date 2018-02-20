#include<stdio.h>
int main()
{
int number;
int y,i;
int *ptrx;
int *t;
printf("\nEnter an input:\n");
scanf("%d", &number);
i=1+number;
ptrx=&i;
y=*ptrx;
t=&y;
printf("The Total is :%d\n", i);
printf("addrees of i%x\n", ptrx);
printf("y:%d\n", y);
y=30;
printf("ii%d\n",i);
printf("yy:%d\n",y);
printf("addres of y %x\n", t);
return 0;
}
