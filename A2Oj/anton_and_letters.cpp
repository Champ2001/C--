#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    set<char>unique;
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i] <='z')
        unique.insert(s[i]);
    }
    cout<<unique.size();
}