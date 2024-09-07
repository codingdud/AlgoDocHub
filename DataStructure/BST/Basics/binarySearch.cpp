#include<iostream>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
    node():data(0),left(nullptr),right(nullptr){}
    node(int x):data(x),left(nullptr),right(nullptr){}
    node(int x,node* l,node* r):data(x),left(l),right(r){}
};

class bst{
    public:
    node* head;
    bst(){
        head=nullptr;
    }
    bst(int x){
        head=new node(x);
    }
    void insert(int x){
        node* temp=head;
        while(temp!=nullptr){
            if (x<temp->data)
            {
                if(temp->left==nullptr){
                    temp->left=new node(x);
                    return;
                }
                temp=temp->left;
            }
            else{
                if(temp->right==nullptr){
                    temp->right=new node(x);
                    return;
                }
                temp=temp->right;
            }
        }
    }
    void inorder(node* temp){
        if(temp==nullptr){
            return;
        }
        inorder(temp->left);
        cout<<temp->data<<" ";
        inorder(temp->right);
    }
    bool find(int x){
        node* temp=head;
        while(temp!=nullptr){
            if(temp->data==x){
                return true;
            }
            else if(x<temp->data){
                temp=temp->left;
            }
            else{
                temp=temp->right;
            }
        }
        return false;
    }
};
int main(){
    bst b(5);
    b.insert(3);
    b.insert(7);
    b.insert(2);
    b.insert(4);
    b.insert(6);
    b.insert(8);
    b.inorder(b.head);
    cout<<b.find(4);
    return 0;
}