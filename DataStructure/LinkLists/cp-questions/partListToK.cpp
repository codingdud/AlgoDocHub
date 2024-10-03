#include<bits/stdc++.h>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
    ListNode(): val(0), next(nullptr){}
    ListNode(int x): val(x), next(nullptr){}
    ListNode(int x, ListNode* next): val(x), next(next){}
};

class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int len=0;
        ListNode* temp=head;
        while(temp!=nullptr) {temp=temp->next; len++;}
        int n=len/k;
        int r=len%k;
        if(n==0){ n=1; r=0;}
        vector<ListNode*> res;
        temp=head;
        for(int i=0;i<k;i++){
            int curent=n;
            ListNode* newHead = new ListNode();
            ListNode* newTemp = newHead;
            if(r>0){
                curent++;
                r--;
            }
            for(int j=0;j<curent;j++){
                if(temp==nullptr) break;
                newTemp->next = new ListNode(temp->val);
                newTemp = newTemp->next;
                temp=temp->next;
            }
            res.push_back(newHead->next);
        }
        return res;
        
    }
};

int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    Solution s;
    vector<ListNode*> res = s.splitListToParts(head, 3);
    for(auto x: res){
        while(x!=nullptr){
            cout<<x->val<<" ";
            x=x->next;
        }
        cout<<endl;
    }
    return 0;
}