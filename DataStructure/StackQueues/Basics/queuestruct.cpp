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
class queue{
    public:
    Node* head;
    Node* tail;
    queue(){
        head=nullptr;
        tail=nullptr;
    }
    void push(int x){
        Node* temp=new Node(x);
        if(head==nullptr){
            head=temp;
            tail=temp;
            return;
        }
        tail->next=temp;
        tail=temp;
    }
    void pop(){
        if(head==nullptr){
            cout<<"Queue is empty"<<endl;
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
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop();
    q.print();
    return 0;
}
