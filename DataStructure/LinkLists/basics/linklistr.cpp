#include<iostream>
using namespace std;

struct LinkNode{
 int val;
 LinkNode* next;
 LinkNode(): val(0),next(nullptr){}
 LinkNode(int x):val(x),next(nullptr){}
 LinkNode(int x,LinkNode* node):val(x),next(node){}
};
class linklistr{
    public:
    LinkNode* head;
    linklistr(){
        head=nullptr;
    }
    void insertFront(int x){
        LinkNode* temp=new LinkNode(x);
        if(head==nullptr){
            head=temp;
            return;
        }
        temp->next=head;
        head=temp;
    }
    void insertEnd(int x){
        LinkNode* temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=new LinkNode(x);
    }
    void deleteFront(){
        LinkNode* temp=head;
        head=head->next;
        delete temp;
    }
    void deleteEnd(){
        LinkNode* temp=head;
        while(temp->next->next!=nullptr){
            temp=temp->next;
        }
        LinkNode* del=temp->next;
        temp->next=nullptr;
        delete del;
    }
    void print(){
        LinkNode* temp=head;
        while(temp!=nullptr){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }
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
