#include <stdio.h>
#include <stdbool.h>

void Map(int x, int y){
    for (int i = 4; i >=0; --i) {
        for (int j = 0; j < 5; ++j) {
            if(i == y && j == x){
                printf("K ");
                continue;
            }
            printf("x ");
        }
        printf("\n");
    }
}

bool Available(int x, int y){
    if(x<0 || x>4){
        return false;
    }
    if(y<0 || y>4){
        return false;
    }
    return true;
}

void Command(int x, int y){
    char cmd;
    printf("Command : ");
    scanf(" %c",&cmd);
    printf("\n");

    switch (cmd) {
        case 'w':{
            if(Available(x,y+1)==false){
                Map(x,y);
                break;
            }
            Map(x,y+1);
            y++;
            break;
        }
        case 'a':{
            if(Available(x-1,y)==false){
                Map(x,y);
                break;
            }
            Map(x-1,y);
            x--;
            break;
        }
        case 's':{
            if(Available(x,y-1)==false){
                Map(x,y);
                break;
            }
            Map(x,y-1);
            y--;
            break;
        }
        case 'd':{
            if(Available(x+1,y)==false){
                Map(x,y);
                break;
            }
            Map(x+1,y);
            x++;
            break;
        }
        case 'q':
            return;
        default:
            Map(x,y);
            break;
    }

    Command(x,y);
}

int main(){
    Map(2,0);
    Command(2,0);
    return 0;
}