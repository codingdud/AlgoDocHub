#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include<stack>
using namespace std;
class Solution {
    public :
    int calpoints(vector <string> ops){
        stack <int> s;
        for(string it:ops){
            if(it=="C"){
                s.pop();
            }
            else if(it=="D"){
                s.push(s.top()*2);
            }
            else if(it=="+"){
                int a=s.top();
                s.pop();
                int b=s.top();
                s.push(a);
                s.push(a+b);
            }
            else{
                s.push(stoi(it));
            }
        }
        int sum=0;
        while(!s.empty()){
            sum+=s.top();
            s.pop();
        }
        return sum;
    }
};
int main(){
    Solution s;
    vector <string> ops={"5","2","C","D","+"};
    cout<<s.calpoints(ops);
    return 0;
}
