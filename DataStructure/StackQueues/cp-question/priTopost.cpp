#include<iostream>
#include<stack>
using namespace std;

string preTopost(string s){
    stack<string> st;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='+'||s[i]=='-'||s[i]=='/'||s[i]=='*'){
            string op1=st.top();st.pop();
            string op2=st.top();st.pop();
            st.push(op1+op2+s[i]);
        }else {
            st.push(string(1,s[i]));
        }
    }
    return st.top();
}
int main(){
    cout<<preTopost("*-A/BC-/AKL")<<endl;
    return 0;
}