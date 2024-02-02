#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a;
    int max_value=0;
    int min_value=110;
    int mini=0,maxi=0;
    for(int i=1;i<=t;i++){
        cin>>a;
        if(a>max_value){
            max_value=a;
            maxi=i;
        }
        if(a<=min_value){
            min_value=a;
            mini=i;
        }
    }
    if(maxi>mini){
        cout<<(maxi-1)+(t-mini)-1;//overlap occurs while swapping the values
    }
    else{
        cout<<(maxi-1)+(t-mini);
    }
}