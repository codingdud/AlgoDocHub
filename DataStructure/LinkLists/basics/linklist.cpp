#include<iostream>
using namespace std;

struct LinkNode{
 int val;
 LinkNode* next;
 LinkNode(): val(0),next(nullptr){}
 LinkNode(int x):val(x),next(nullptr){}
 LinkNode(int x,LinkNode* node):val(x),next(node){}
};
void insertAtEnd(LinkNode* head, int val){
    LinkNode* temp = head;
    while(temp->next!=nullptr){
        temp = temp->next;
    }
    temp->next = new LinkNode(val);
}
void insertAtBegin(LinkNode** head, int val){
    LinkNode* temp = new LinkNode(val);
    temp->next = *head;
    *head = temp;
}
int main(){
    LinkNode* third = new LinkNode(3);
    LinkNode* second = new LinkNode(2,third);
    LinkNode* head = new LinkNode(1,second);
    cout<<&head<<endl;
    insertAtBegin(&head,8);
    LinkNode* temp = head;
    while(temp!=nullptr){
    cout<<temp->val<<" ";
    temp = temp->next;
    }
    cout<<endl;
    return 0;
}
