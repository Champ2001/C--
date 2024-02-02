#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mini=INT_MIN;
    int copy=n;
    if(n<0){
    int firstremove=copy/10;
    int lastdigit=n%10;
    int div100=n/100;
    int secondremove=(div100*10)+(lastdigit);
    mini=max(firstremove,secondremove);
    }
    if(n<0){
        cout<<mini;
    }
    else{
        cout<<n;
    }
}