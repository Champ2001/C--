#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    int stock(vector<int>  &arr){
        int minPrice=INT_MAX;
        int n=arr.size();
        int maxprofit=0;
        for(int i=0;i<n;i++){
            minPrice=min(arr[i],minPrice);
            maxprofit=max(minPrice-arr[i],maxprofit);
        }
        return maxprofit;
    }
};