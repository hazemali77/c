#include <stdio.h>
#include <string.h>

void swap(void *vp1, void *vp2, int size)
{
char buffer[size];
memcpy(buffer, vp1, size);
memcpy(vp1, vp2, size);
memcpy(vp2, buffer, size);


}
int main(int argc, char *argv[])
{
int a= 100;
int b= 11 ;
int *ap = &a;
int *bp= &b;
swap(ap, bp, sizeof(int));
printf("%d", a);
return 0;
}
