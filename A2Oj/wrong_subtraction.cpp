#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin>>n>>k;
    while(k--){
        int lastdigit=n%10;
        if(lastdigit != 0){
            n-=1;
        }
        else{
            n/=10;
        }
    }
    cout<<n;
}