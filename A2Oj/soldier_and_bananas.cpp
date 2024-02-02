#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k,n,w;
    cin>>k>>n>>w;
    int cost=0;
    for(int i=1;i<=w;i++){
        cost+=(k*i);
    }
    int out=0;
    if(cost<n){
        cout<<out;
    }
    else{
        cout<<(cost-n);
    }
}