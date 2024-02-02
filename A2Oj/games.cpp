#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int count=0;
    int x[t],y[t];
    for(int i=0;i<t;i++){
        cin>>x[i];
        cin>>y[i];
    }
    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            if(x[i]== y[j]){
                count++;
            }
        }
    }
    cout<<count;        
}