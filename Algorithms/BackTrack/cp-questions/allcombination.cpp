#include<bits/stdc++.h>

void allcombination(std::string str,std::string dp,std::unordered_set<int> &s){
    if(dp.size() == str.size()){
        std::cout<<dp<<std::endl;
        return;
    }
    for(int i=0;i<str.size();i++){
        if(s.find(i)==s.end()){
            s.insert(i);
            allcombination(str, dp+str[i], s);
            s.erase(i);
        }
    }
}
int main(){
    std::string str = "abc";
    std::unordered_set<int> s;
    allcombination(str, "", s);
    // std::cout<<s<<std::endl;
    return 0;
}