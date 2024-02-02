#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string k="codeforces";
        for(int i=0;i<s.size();i++){
            if(s[i] == 'c' || s[i] == 'o'||s[i] == 'd' ||s[i] == 'e' || s[i] == 'f'|| s[i] == 's'||s[i] == 'r'){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}