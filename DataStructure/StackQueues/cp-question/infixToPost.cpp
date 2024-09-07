#include<iostream>
#include<stack>
using namespace std;

class Soution{
    public:
    int prec(char ch){
        if(ch=='^'){
            return 3;
        }else if(ch=='*'||ch=='/'){
            return 2;
        }else if(ch=='+'||ch=='-'){
            return 1;
        }else{
            return -1;
        }
    }
    string infixtopost(string s){
        stack<char> st;
        string ans="";
        for(char ch:s){
            if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z'||ch>='0'&&ch<='9'){
                ans+=ch;
            }else if(ch=='('){
                st.push(ch);
            }else if(ch==')'){
                while(!st.empty()&&st.top()!='('){
                    ans+=st.top();
                    st.pop();
                }
                st.pop();
            }else{
                while(!st.empty()&&prec(ch)<=prec(st.top())){
                    ans+=st.top();
                    st.pop();
                }
                st.push(ch);
            }         
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
    int solvepost(string s){
        stack<int> st;
        for(char ch:s){
            if(ch>='0'&&ch<='9'){
                st.push(ch-'0');
            }else{
                int op2=st.top();st.pop();
                int op1=st.top();st.pop();
                switch(ch){
                    case '+':st.push(op1+op2);break;
                    case '-':st.push(op1-op2);break;
                    case '*':st.push(op1*op2);break;
                    case '/':st.push(op1/op2);break;
                    case '^':st.push(op1^op2);break;
                }
            }
        }
        return st.top();
    }
};
int main(){
    Soution s;
    cout<<s.infixtopost("a/b*(c^d-e)^(f+g*h)-i")<<endl;
    cout<<s.infixtopost("(2+6/6*(7*6)+1)")<<endl;
    string post=s.infixtopost("(2+6/6*(7*6)+1)");
    cout<<s.solvepost(post)<<endl;
    return 0;
}