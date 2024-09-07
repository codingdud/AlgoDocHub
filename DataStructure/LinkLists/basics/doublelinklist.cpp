#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* prev;
    Node():data(0),next(nullptr),prev(nullptr){}
    Node(int x):data(x),next(nullptr),prev(nullptr){}
    Node(int x,Node* n,Node* p):data(x),next(n),prev(p){}
};
class DoubleLinkList{
    public:
    Node* head;
    DoubleLinkList(){
        head=nullptr;
    }
    void insertFront(int x){
        Node* temp=new Node(x);
        if(head==nullptr){
            head=temp;
            return;
        }
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
    void insertEnd(int x){
        Node* temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        Node* newNode=new Node(x);
        temp->next=newNode;
        newNode->prev=temp;
    }
    void deleteFront(){
        Node* temp=head;
        head=head->next;
        head->prev=nullptr;
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
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};

int main(){
    Node* head=new Node(1);
    Node* second=new Node(2);
    Node* third=new Node(3);
    head->next=second;
    second->next=third;
    second->prev=head;
    third->prev=second;
    //print elements
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}