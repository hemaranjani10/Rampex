#include <stdio.h>

void even(int x, int y){
    if(x>y)return;
    printf("%d ",x);
    even(x+2,y);
    }

    int main(){
        even(10,30);
    }
