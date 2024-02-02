#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int totalsum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        totalsum+=a[i];
    }
    int sum1=0;
    int count=0;
    int half=totalsum/2;
    sort(a,a+n);
    for(int i=n-1;i>=0;i--){
        sum1+=a[i];
        count++;
        if(sum1 >half){
            break;
        }
    }
    cout<<count;    
}