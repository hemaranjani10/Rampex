#include <stdio.h>
void numbers(int x){
    if(x==0)return;
    printf("%d ",x);
    numbers(x-1);
}
void numbersdesc(int x){
    if(x==0) return;
    numbers(x-1);
    printf("%d ",x);
}

int main(){
     int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Descending order: ");
    numbers(n); 
    printf("\nAscending order: ");
    numbersdesc(n);
    return 0;
}
