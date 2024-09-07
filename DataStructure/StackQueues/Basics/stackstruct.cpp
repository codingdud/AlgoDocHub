#include<iostream>
using namespace std;
//using single linked list
struct Node{
    int data;
    Node* next;
    Node():data(0),next(nullptr){}
    Node(int x):data(x),next(nullptr){}
    Node(int x,Node* n):data(x),next(n){}
};
class Stack{
    public:
    Node* head;
    Stack(){
        head=nullptr;
    }
    void push(int x){
        Node* temp=new Node(x);
        if(head==nullptr){
            head=temp;
            return;
        }
        temp->next=head;
        head=temp;
    }
    void pop(){
        if(head==nullptr){
            cout<<"Stack is empty"<<endl;
            return;
        }
        Node* temp=head;
        head=head->next;
        delete temp;
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
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();
    s.print();
    return 0;
}
