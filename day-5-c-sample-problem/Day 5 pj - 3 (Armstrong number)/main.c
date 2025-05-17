#include <stdio.h>

int main(){

    int x;
    scanf("%d",&x);
    int y=x;
    int count = 0;
    while(x>0){
       x=x/10;
       count++;
 }
     x=y;
     int sum=0;
     for(int j=1;j<=count;j++){
        int r=x%10;
        int prod=1;
     for(int i=1;i<=count;i++){
        prod = prod*r;
     }  
        sum+=prod;
        x/=10;
     }
      if (sum == y) {
        printf("Armstrong number\n");
    } else {
        printf("Not an Armstrong number\n");
    }
 return 0;
  
}


