#include<bits/stdc++.h>
using namespace std;
int maxSubarray(int A[],int n){
    unordered_map<int,int> mpp;
    int maxi=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=A[i];
        if(sum ==0){
            maxi=i+1; //
        }
        else if(mpp.find(sum) != mpp.end()){  //check whether the prefixsum previously existed in the map
            maxi=max(maxi,i-mpp[sum]);
        }
        else{
            mpp[sum]=i;  //putting the prefixsum in the map along with the index
        }
    }
}