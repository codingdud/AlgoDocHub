#include<iostream>
using namespace std;
struct Node{
    int val;
    Node* next;
    Node():val(0),next(nullptr){}
    Node(int x):val(x),next(nullptr){}
    Node (int x,Node* next):val(x),next(next){}
};
class midoflist{
    public:
    Node* head;
    midoflist(){
        head=nullptr;
    }
    void insertFront(int x){
        Node* temp=new Node(x);
        if(head==nullptr){
            head=temp;
            return;
        }
        temp->next=head;
        head=temp;
    }
    void insertEnd(int x){
        Node* temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=new Node(x);
    }
    void deleteFront(){
        Node* temp=head;
        head=head->next;
        delete temp;
    }
    void deleteEnd(){
        Node* temp=head;
        while(temp->next->next!=nullptr){
            temp=temp->next;
        }
        Node* del=temp->next;
        temp->next=nullptr;
        delete del;
    }
    void print(){
        Node* temp=head;
        while(temp!=nullptr){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }
    void mid(){
        Node* slow=head;
        Node* fast=head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        cout<<slow->val<<endl;
    }
};
void insertAtEnd(Node* head, int val){
    Node* temp = head;
    while(temp->next!=nullptr){
        temp = temp->next;
    }
    temp->next = new Node(val);
}
void insertAtBegin(Node** head, int val){
    Node* temp = new Node(val);
    temp->next = *head;
    *head = temp;
}
int main(){
    midoflist list;
    list.insertFront(1);
    list.insertEnd(2);
    list.insertEnd(3);
    list.insertEnd(4);
    list.insertEnd(5);
    list.mid();
}
