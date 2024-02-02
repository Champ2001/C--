#include<bits/stdc++.h>
using namespace std;
int f(int ind,vector<int>&v){
    int n=v.size();
    int len=0;
    if(ind == n){
        return 0 ;
    }
    for(int i=0;i<n;i++){
        if(i+1<=n && v[i+1]>v[i]){
            len=1+f(ind+1,v);
        }
        else{
            len=0+f(ind+1,v);
        }
    }
    return len;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int ans=f(0,v);
    cout<<ans;
}