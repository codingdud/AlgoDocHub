#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int kardian1d(vector<int> &arr){
        int sum=0,maxi=0;
        for(int i : arr){
            sum+=i;
            sum=max(sum,i);
            maxi=max(maxi,sum); 
        }
        return maxi;
    }
    int kardian2d(vector<vector<int>> &arr){
        vector<int> temp(arr[0].size(),0);
        int maxi=0;
        for(int i=0;i<arr[0].size();i++){
            fill(temp.begin(), temp.end(), 0);
            for(int j=i;j<arr[0].size();j++){
                for(int t=0;t<arr.size();t++){
                    temp[t]=temp[t]+arr[t][j];
                    //cout<<arr[t][j];
                    //cout<<temp[t]<<" ";
                }
                //cout<<kardian1d(temp)<<" ";
                maxi=max(kardian1d(temp),maxi);
             }
        }
        return maxi;
    }
};
int main(){
    Solution ob;
    vector<vector<int>> arr={{1,2,3},{3,-9,4},{3,-5,8}};
    cout<<ob.kardian2d(arr);
}