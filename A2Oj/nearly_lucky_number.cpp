#include<bits/stdc++.h>
using namespace std;
#define int long long int 
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int count =0;
    while(n!=0){
        int lastdigit=n%10;
        if(lastdigit == 4 || lastdigit == 7){
            count++;
        }
        n/=10;
    }
    if(count == 4 || count == 7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}