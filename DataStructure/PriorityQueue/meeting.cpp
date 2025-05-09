#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int mostBooked(int n, vector<vector<int>>& meetings) {
            vector<int> ans(n,0);
            //priority_queue<int,vector<int>,function<bool(const int,const int)>> pqe([](const int& a,const int&b){return a<b;});
            priority_queue<pair<int,int>,vector<pair<int,int>>,function<bool(const pair<int,int>,const pair<int,int>)>>  
            pq([](const pair<int,int> &a,const pair<int,int> &b){
                return a.first>b.first;
            });
            priority_queue<int,vector<int>,function<bool(int,int)>> pq1([](int a,int b){
                return a>b;
            });
            priority_queue<pair<pair<int,int>,int>,vector<pair<pair<int,int>,int>>,function<bool(const pair<pair<int,int>,int>,const pair<pair<int,int>,int>)>>
            pq2([](const pair<pair<int,int>,int> &a,const pair<pair<int,int>,int> &b){
                return a.first.second>b.first.second;
            });
            for(auto it:meetings){
                pq.push({it[0],it[1]});
            }
            while(--n) pq1.push(n);
            pq1.push(0);
            /* while(!pq.empty()){
                cout<<pq.top().first<<":"<<pq.top().second<<",";
                pq.pop();
            } */
            long long time=0;
            int count=0;
            while(!pq.empty()){
                if(!pq1.empty()){
                    ans[pq1.top()]++;
                    if(count!=0) {
                        pq2.push({{count,count+pq.top().second-pq.top().first},pq1.top()});
                        cout<<count<<":"<<count+pq.top().second-pq.top().first<<":"<<pq1.top()<<",";
                    }
                    else{ 
                        pq2.push({pq.top(),pq1.top()});
                        cout<<pq.top().first<<":"<<pq.top().second<<":"<<pq1.top()<<",";
                    }
                    count=0;
                    
                    pq.pop();
                    pq1.pop();
                }else if(pq2.top().first.second<=time){
                    if(count==0) count=time;
                    pq1.push(pq2.top().second);
                    cout<<"pop->"<<pq2.top().first.first<<":"<<pq2.top().first.second<<":"<<pq2.top().second<<"\n";
                    pq2.pop();
                    continue;
                }
                time++;
            }
            for(int i:ans) cout<<i<<" ";
            auto maxi=max_element(ans.begin(),ans.end());
            return maxi-ans.begin();
        }
    };

int main(){
    vector<vector<int>> arr={{0,10},{1,5},{2,7},{3,4},{8,11},{9,12}};

    Solution ob;
    cout<<"\n"<<ob.mostBooked(2,arr)<<endl;
}