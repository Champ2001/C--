#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    set<char>st;
    for(int i=0;i<s.size();i++){
        st.insert(s[i]);
    }
    int size=st.size();
    if(size %2 == 1){
        cout<<"IGNORE HIM!";
    }
    else {
        cout<<"CHAT WITH HER!";
    }
}