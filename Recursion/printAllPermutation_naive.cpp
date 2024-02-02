//the total number of permutations for n=3 is 3factorial i.e 6
#include<bits/stdc++.h>
using namespace std;
class Solution{
    private:
    void recurPermute(vector<int>&nums,vector<vector<int>>&ans,vector<int>&ds,int freq[]){
        if(nums.size() == ds.size()){
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                //if that element is picked
                ds.push_back(nums[i]);
                freq[i]=1;
                recurPermute(nums,ans,ds,freq);
                // if the element is not picked
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
    public:
    vector<vector<int>> permute(vector<int>nums){
        vector<vector<int>>ans;
        vector<int>ds;
        int freq[nums.size()];
        for(int i=0;i<nums.size();i++) freq[i]=0;
        recurPermute(nums,ans,ds,freq);
        return ans;
    }
};
int main(){
    Solution obj;
    vector<int>v={1,2,3};
    vector<vector<int>>sum=obj.permute(v);
    for(int i=0;i<sum.size();i++){
        for(int j=0;j<sum[i].size();j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
}