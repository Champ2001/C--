#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> foursum(vector<int>&nums, int target){
    vector<vector<int>> res;
    if(nums.empty()){
        return res;
    }
    int n=nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int target_2=target-nums[i]-nums[j];
            int front=j+1;
            int back=n-1;
            while(front<back){
                int two_sum=nums[front]+nums[back];
                if(target_2 < two_sum){
                    back--;
                }
                else if(target_2 > two_sum){
                    front++;
                }
                else{
                    vector<int>quadruplet(4,0);
                    quadruplet.push_back(nums[i]);
                    quadruplet.push_back(nums[j]);
                    quadruplet.push_back(nums[front]);
                    quadruplet.push_back(nums[back]);
                    res.push_back(quadruplet);
                    while(front<back && nums[front]==quadruplet[2])++front;
                    while(front<back && nums[back]==quadruplet[3])++back;
                }
            }
            //2 2 2 3
            while(j+1 <n && nums[j+1]==nums[j])++j;
            while(i+1<n && nums[i+1]==nums[i])++i;
        }
    }
    return res;
}