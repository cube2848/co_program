#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct num{
    char *  Num;
}num;
int N;
int sum;
int stack;
int main() {
    num *  nums = malloc(sizeof (struct num)*N);
    scanf("%d",&N);
    char temp[81];
    for (int k = 0; k < N; ++k) {
        scanf("%s",temp);
        nums[k].Num = malloc(sizeof(char)* strlen(temp));
        strcpy(nums[k].Num,temp);
    }
    for (int i = 0; i < N; ++i) {
        sum = 0;
        stack = 1;
        for (int j = 0; j< strlen(nums[i].Num); ++j) {
            if(nums[i].Num[j]=='O'){
                sum = sum+ stack;
                stack++;
            }
            if(nums[i].Num[j]=='X'){
                stack = 1;
            }
        }
        printf("%d\n",sum);
    }
    for (int m = 0; m < N; ++m) {
        free(nums[m].Num);
    }
    free(nums);
}