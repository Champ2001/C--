#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long len;
        string s;
        cin>>len;
        cin>>s;
        long long row=0;
        long long col=0;
        for(auto i: s){
            if(i=='U')col++;
            if(i=='D')col--;
            if(i=='L')row--;
            if(i=='R')row++;
            if(row == 1 and col == 1){
                cout<<"YES"<<endl;
                return;
            }
        }
        cout<<"NO"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}