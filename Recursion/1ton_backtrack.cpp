#include<bits/stdc++.h>
using namespace std;
void printer(int i,int n){
    if(i<1)return;
    printer(i-1,n);
    cout<<i<<" ";
}
int main(){
    int n;
    cin>>n;
    printer(n,n);
}