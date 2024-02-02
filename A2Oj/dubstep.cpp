#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='W' && s[i+1] == 'U' && s[i+2]=='B'){
            i=i+2;//move the pointer of the string to total 3 steps so to get the desired output.
            cout<<" ";
        }
        else{
            cout<<s[i];
        }
    }
}