/*** #include <stdio.h>
int main(){
    int n=5;
    int x=1;y=1;
    int z=0;
    if(n==0) printf("%d",0);
    if(n==1  || n==2){
        printf("%d",1);
        return 0;
    }
    for(int i=2;i<=2;i++)
    
    int
} ***/


#include <stdio.h>
int fibno(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    if(n==2) return 1;
    
    return fibno(n-1) + fibno (n-2);
} 

int main()
{
    printf("%d",fibno(7));
}