#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int total=0;
    int maxi=INT_MIN;
    while(t--){
        int a,b;
        cin>>a>>b;
        total+=b-a;
        maxi=max(maxi,total);
    }
    cout<<maxi;
}