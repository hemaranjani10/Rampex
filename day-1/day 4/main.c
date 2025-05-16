#include<stdio.h>
#include<string.h>
int main() {
    char username[20]="tamil";
    int password = 12345;
    char arr[20];
    int x;
    scanf("%s",arr);
    scanf("%d",&x);
    printf("%d",(strcmp(username,arr)));
    return 0;
}