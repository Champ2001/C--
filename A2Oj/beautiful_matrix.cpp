#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int moves=0;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>n;
            if(n==1){
            moves=abs(i-3)+abs(j-3);
        }}
    }
    cout<<moves;
}