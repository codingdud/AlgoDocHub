#include<stdio.h>
#include<stdlib.h>
typedef struct LinkNode{
    int val;
    struct LinkNode* next;
} LinkNode;
void insertAtEnd(LinkNode* head, int val){
    LinkNode* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = (LinkNode*)malloc(sizeof(LinkNode));
    temp->next->val = val;
    temp->next->next = NULL;
}
void insertAtBegin( LinkNode** head, int val){
    LinkNode* temp = (LinkNode*)malloc(sizeof(LinkNode));
    temp->val = val;
    temp->next = *head;
    *head = temp;
}
int main(){
    LinkNode* third = (LinkNode*)malloc(sizeof(LinkNode));
    third->val = 3;
    third->next = NULL;
    LinkNode* second = (LinkNode*)malloc(sizeof(LinkNode));
    second->val = 2;
    second->next = third;
    LinkNode* head = (LinkNode*)malloc(sizeof(LinkNode));
    head->val = 1;
    head->next = second;
    printf("%p\n",head);
    insertAtBegin(&head,8);
    LinkNode* temp = head;
    while(temp!=NULL){
        printf("%d ",temp->val);
        temp = temp->next;
    }
    printf("\n");
    return 0;
}