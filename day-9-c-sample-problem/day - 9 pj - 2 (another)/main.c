#include <stdio.h>
void numbers(int x){
    if(x==5)return;
    printf("%d ",x);
    numbers(x-1);
}
void numbersdesc(int x){
    if(x==10) return;
    numbers(x-1);
    printf("%d ",x);
}
int main()
{
    numbersdesc(9);
}