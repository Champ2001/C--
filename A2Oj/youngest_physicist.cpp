#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int x,y,z;
    int s1=0,s2=0,s3=0;
    while(t--){
        cin>>x>>y>>z;
        s1+=x;
        s2+=y;
        s3+=z;
    }
    if(s1==0 && s2== 0 && s3== 0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}