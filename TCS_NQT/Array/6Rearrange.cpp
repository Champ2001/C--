#include<bits/stdc++.h>
using namespace std;
void rearrange(vector<int>&v, int n){
    sort(v.begin(),v.end());
    int low = n/2;
    int high= n-1;
    while (low<high)
    {
        swap(v[low],v[high]);
        low++;
        high--;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    
}

int main(){
    vector<int>v={1,2,3,4,5,6,7};
    int n=v.size();
    rearrange(v,n);
}