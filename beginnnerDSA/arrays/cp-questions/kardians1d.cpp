#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int kardian(vector<int> &arr){
        int maxi=0,sum=0;
        for(int i:arr){
            sum+=i;
            sum=max(sum,i);
            maxi=max(sum,maxi);
        }
        return maxi;
    }
};

int main(){
    vector<int> arr={1,7,-9,8,6};
    Solution ob;
    cout<<ob.kardian(arr);
    return 0;
}