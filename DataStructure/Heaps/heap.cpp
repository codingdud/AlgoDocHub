#include<iostream>
#include<vector>
using namespace std;

class Heap{
private:
    vector<int> h;
public:
    int top(){
        if(!h.empty()) return h[0];
    }
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
    int pop(){
        int ans=h[0];
        del();
        return ans;
    }
    vector<int> heapsort(){
        vector<int> ans;
        while(!h.empty()){
            ans.insert(ans.begin(),pop());
        }
        return ans;
    }
};
int main(){
    Heap ob;
    vector<int> v={7,6,5,4,3,2,1};
    for(int i:v){
        ob.insert(i);
    }
    vector<int> ans=ob.heapsort();
    for(int i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}