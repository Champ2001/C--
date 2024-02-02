#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int k;
    int arr[t+1];
    for(int i=1;i<=t;i++){
        cin>>k;
        arr[k]=i;
    }
    for(int i=1;i<=t;i++){
        cout<<arr[i]<<" ";
    }
}