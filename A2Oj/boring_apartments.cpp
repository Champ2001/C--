#include<bits/stdc++.h>
using namespace std;
int countdigits(int n){
    int cnt=0;
    while(n!=0){
        cnt++;
        n=n/10;
    }
    return cnt;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int sum=0;
    int ans=0;
    int finalans=0;
    while(t--){
        int n;
        cin>>n;
        int copy=n;
        ans=10*((n%10)-1);
        int count=countdigits(copy);
        for(int i=1;i<=count;i++){
            sum+=i;
        }
        finalans=ans+sum;
        ans=0;sum=0;
        // cout<<sum<<"\n";
        cout<<finalans<<"\n";
    }
}