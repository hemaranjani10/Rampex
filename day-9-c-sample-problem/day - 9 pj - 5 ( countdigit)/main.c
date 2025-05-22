#include <stdio.h>
   int countdigit(int x){
       int c=0;
       while(x>0){
          c++;
           x/=10;
    }
         return c;
 }
         int count(int x){
          if(x==0) return 0;
          else return 1+ count(x/10);
            }
         int main(){
          printf("%d",countdigit(12345));
          
          printf("\n%d",count(12345));
                   }
