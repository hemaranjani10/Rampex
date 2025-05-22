#include <stdio.h>

int main()
{
    int a =7;
    int * p;
    p=&a;
    printf("%d %d %d",a,*p,p,&a);
    *p=8;
    printf("\n%d %d %d %d",a,*p,p,&a);

    return 0;
}