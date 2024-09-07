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
            head->prev=head;
            head->next=head;
            return;
        }
        temp->next=head;
        temp->prev=head->prev;
        head->prev->next=temp;
        head->prev=temp;
        head=temp;
    }
    void insertEnd(int x){
        Node* newNode=new Node(x);
        if(head==nullptr){
            head=newNode;
            head->prev=head;
            head->next=head;
            return;
        }
        head->prev->next=newNode;
        newNode->prev=head->prev;
        newNode->next=head;
        head->prev=newNode;
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