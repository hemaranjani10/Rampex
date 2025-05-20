#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        for(int j=i; j<=6; j++) {
            if(i%2==0)printf("hi");
            if(j%2==0)printf("hello");
            j++;
        }
    }
}