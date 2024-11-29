#include<bits/stdc++.h>
using namespace std;

int main(){
    string word="AabBcC";
    for(int i=0;i<word.length();i++){
        isupper(word[i])?cout<<"upper:"<<word[i]<<"\n":cout<<"";
        islower(word[i])?cout<<"lower:"<<word[i]<<"\n":cout<<"";
    }
    for(int i=0;i<word.length();i++){
        if(isupper(word[i])) cout<<"tolower:"<<(char)tolower(word[i])<<"\n";
        if(islower(word[i])) cout<<"tolower:"<<(char)toupper(word[i])<<"\n";
    }
}