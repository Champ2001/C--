#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int pos1=0,pos2=0;
        for(int i=0;i<s.size();i++){
            if(s[i] == '1'){
                pos1=i;
                break;
            }
        }
        for(int i=s.size()-1;i>=pos1;i--){
            if(s[i] == '1'){
                pos2=i;
                break;
            }
        }
        int count=0;
        for(int i=pos1;i<pos2;i++){
            if(s[i] == '0'){
                count++;
            }
        }
        cout<<count<<"\n";
    }
}