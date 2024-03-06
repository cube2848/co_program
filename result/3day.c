#include <stdio.h>
#include <stdlib.h>

void chain(int x, int count, int original);

int main(){
    int x;
    scanf("%d",&x);
    chain(x, 0, x);
    return 0;
}

void chain(int x, int count, int original) {
    if(x==original&&count!=0){
        printf("%d",count);
        exit(0);
    }
    if(x / 10 < 1){
        count++;
        chain(x+(10*x),count,original);
    } else{
        int front = x/10;
        int back = x%10;
        if((front+back)/10>=1 ){
            count++;
            chain((back*10)+((front+back)%10),count,original);
        }
        count++;
        chain((back*10)+(front+back),count,original);
    }
}

