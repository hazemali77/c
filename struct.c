#include <stdio.h>
#include <ctype.h>
int main()
{
struct fraction{
int num;
int denum;
};

struct fraction pi;
pi.num = 30;
pi.denum = 10;
struct fraction ti;
ti.num = 6;
ti.denum = 9;

int *ptrtid;
int *ptrtin;
int *ptrn;
int *ptrd;

ptrn = &(pi.num);
ptrd = &(pi.denum);
ptrtin = &(ti.num);
ptrtid = &(ti.denum);
printf("this address of pi.num: %p\n", ptrn+3);
printf("The address of pi.denum:%p\n", ptrd+3);
printf("This is the address of ti.num: %p\n", ptrtin+1);
printf("THis is the adress of ti.denum: %p\n", ptrtid);
return 0;
}
