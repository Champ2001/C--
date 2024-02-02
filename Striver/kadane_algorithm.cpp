#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    int maxsubarray(vector<int> nums){
        int maxi=INT_MIN;
        int sum=0;
        for(auto num:nums){
            sum+=num;
            maxi=max(sum,maxi);
            if(sum <0){
                sum=0;
            }
        }
        return maxi;
    }
};