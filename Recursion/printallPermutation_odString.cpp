#include<bits/stdc++.h>
using namespace std;
class Solution{
    private:
    void PermuteHelp(int index,vector<vector<int>>&ans,vector<int>&nums){
        if(nums.size() == index){
            ans.push_back(nums);
            return;
        }
        for(int i=index;i<nums.size();i++){
            swap(nums[index],nums[i]);//swap the indexes so as to generate all the recursion calls for the particular index 
            PermuteHelp(index+1,ans,nums);
            swap(nums[index],nums[i]);//after swapping make sure to reswap it for the next recursion calls backtrack!!
        }
    }
    public:
    vector<vector<int>> Permute(vector<int>&nums){
        vector<vector<int>>ans;
        PermuteHelp(0,ans,nums);
        return ans;
    }
};
int main() {
  Solution obj;
  vector < int > v {1,2,3};
  vector < vector < int >> sum = obj.Permute(v);
  cout << "All Permutations are" << endl;
  for (int i = 0; i < sum.size(); i++) {
    for (int j = 0; j < sum[i].size(); j++)
      cout << sum[i][j] << " ";
    cout << endl;
  }
}