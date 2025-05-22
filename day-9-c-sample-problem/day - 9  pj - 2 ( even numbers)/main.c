#include <stdio.h>

void even(int n){
    if(n==10)return;
    printf("%d",n);
    even(n+2);
    }
int main(){
    int n;
    scanf("%d",&n);
    while(n<=10){
       printf("%d ", n);
       n = n + 2;
    }
    int main(){
        even(2);
    }
}