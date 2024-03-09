#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>

// list 베이스
typedef struct Node
{
    int Data;
    struct Node* next;
}Node;

//리스트 끝 찾는 함수
Node *findend(Node *cur);
//리스트 끝에 추가 함수
void add(Node*head, int value);

void listIsFree(Node * head);

void sort(Node *head);

int main(){
    Node * head=malloc(sizeof(struct Node));
    head->Data = 0;
    head->next = NULL;
    int n;
    scanf("%d",&n);
    int i=0;
    int temp = 0;
    while(i<n)
    {
        scanf("%d",&temp);
        add(head,temp);
        i++;
    }
    sort(head);
    listIsFree(head);
    free(head);
    return 0;
}

Node *findend(Node *cur) {
    while(cur->next != NULL){
        cur = cur->next;
    }
    return cur;
}

void add(Node* head, int value){
    Node * cur  = findend(head);
    Node * n= malloc(sizeof(struct Node));
    n->Data = value;
    cur->next = n;
    n->next = NULL;
}

void listIsFree(Node * head){
    while (true) {
        if (head->next == NULL){
            return;
        }
        Node* cur = findend(head);
        free(cur);
    }
}

void sort(Node *head) {
    Node * cur;
    int prev = 0;
    int temp = 0;
    Node* n = head->next;
    bool isexist = false;
    while (n->next != NULL){
        if(n->Data != prev){
            prev = n->Data;
            n = n->next;
            continue;
        }
        isexist = false;
        cur = n->next;
        do{
            if(cur->Data != n->Data){
                isexist = true;
                temp = cur->Data;
                cur->Data = n->Data;
                n->Data = temp;
                break;
            }
            cur = cur->next;
        } while (cur->next != NULL);
        if(isexist == false){
            printf("NO");
            return;
        }
        prev = n->Data;
        n = n->next;
    }
    printf("YES");
}