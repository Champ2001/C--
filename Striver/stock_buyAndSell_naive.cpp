#include<bits/stdc++.h>
using namespace std;
int stock(vector<int> &arr){
    int maxprofit=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]>arr[i]){
                maxprofit=max(arr[j]-arr[i],maxprofit);
            }
        }
    }
    return maxprofit;
}