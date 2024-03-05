#include <stdio.h>
#include <string.h>
void eugine(char *val){
    int temp[strlen(val)];
    int i = 0;
    int front = 1;
    int back=1;
    while (i<strlen(val)) {
        temp[i] = (int)(val[i] - 48);
        i++;
    }
    for (int j = 1; j < strlen(val); ++j) {
        for (int k = 0; k < j; ++k) {
            front = front * temp[k];
        }
        for (int g = j; g < strlen(val); ++g) {
            back = back * temp[g];
        }
        if (front == back){
            printf("YES");
            return;
        }
        front = 1;
        back = 1;
    }
    printf("NO");
}

int main(){
    char str[10];
    scanf("%s", str);
    eugine(str);
    return 0;
}