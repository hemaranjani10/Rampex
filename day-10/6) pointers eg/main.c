#include <stdio.h>
#include<stdbool.h>
int main()
{
    int a=7;
    int * p,*q;
    p=&a;
    q=p;
    
    *q=1;
    *p=4;
    printf("%d",a);

    return 0;
}
