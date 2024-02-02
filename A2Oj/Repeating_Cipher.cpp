#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int len;
    cin>>len;
    string s;
    cin>>s;
    int x=0;
    string ans="";
    for(int i=0;i<s.size();i++){
        i+=x;
        x++;
        ans+=s[i];
    }
    cout<<ans;
}