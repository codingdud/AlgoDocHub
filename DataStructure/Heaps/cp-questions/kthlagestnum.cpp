#include<iostream>
#include<vector>
using namespace std;

class Heap{
private:
    vector<int> h;
public:
    void insert(int x){
        if(h.size()==0){
            h.push_back(x);
        }else{
            h.push_back(x);
            int s=h.size()-1;
            for(int n=s;n>=0;n=(n-1)/2){
                if(h[n]>h[(n-1)/2]){
                    swap(h[n],h[(n-1)/2]);
                }else{
                    break;
                }
            }
        }
    }
    void maxheap(int i){
        int left,right,mx=i;
        left=2*i+1;
        right=2*i+2;
        if(left<h.size()&&h[left]>h[i]) mx=left;
        if(right<h.size()&&h[right]>h[mx]) mx=right;
        if(mx!=i){
            swap(h[i],h[mx]);
            maxheap(mx);
        }
    }
    void del(){
        if(h.empty()) return;
        else{
            int temp=h.back();
            h[0]=temp;
            h.pop_back();
            maxheap(0);
        }
    }
    void heapify(vector<int> v){
        for(int i:v){
            insert(i);
        }
    }
    vector<int> heapshort(){
        vector<int> ans;
        while(!h.empty()){
            ans.insert(ans.begin(),h[0]);
            del();
        }
        cout<<endl;
    }
    void kthlargest(int k){
        for(int i=0;i<k-1;i++){
            del();
        }
        cout<<h[0]<<endl;
    }
};
int main(){
    Heap ob;
    vector<int> v={1,3,4,5,6,7,9};
    ob.heapify(v);
    ob.kthlargest(3);
    return 0;
}