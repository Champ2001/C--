using namespace std;
#include<bits/stdc++.h>
// #include<bits/stdc++.h
int main(){
    string s="sarnava";
    stack<char>st;
    for(int i=0;i<s.size();i++){
        char a=s[i];
        st.push(a);
    }
    string ans="";
    while(!st.empty()){
        char ch=st.top();
        ans.push_back(ch);
        st.pop();
    }
    cout<<ans; 
}