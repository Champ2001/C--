#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    // int sum=0;
    // int it;
    // for(int i=0;i<t;i++){
    //     if(sum<t){
    //         sum+=i;
    //     }
    // }
    // cout<<it;
    if(t==1){
        cout<<t;
        return 0;
    }
    int it=0;
    int sum=0;
    for(int i=1;i<t;i++){
        sum+=i;
        if(sum<=t ){
            t-=sum;
            it++;
        }
    }
    cout<<it;
}