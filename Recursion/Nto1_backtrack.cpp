#include<bits/stdc++.h>
using namespace std;
void printer(int i,int n){
    if(i>n)return;
    printer(i+1,n);
    cout<<i<<" ";
}
int main(){
    int n;
    cin>>n;
    printer(1,n);
}