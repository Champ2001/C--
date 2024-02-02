#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void subsetSumsHelper(int ind,vector<int>&arr,int n,vector<int>&ans,int sum){
        if(ind == n){
            ans.push_back(sum);
            return;
        }
        subsetSumsHelper(ind+1,arr,n,ans,sum+arr[ind]);
        subsetSumsHelper(ind+1,arr,n,ans,sum);
    }
    vector<int> subset(vector<int>arr,int n){
        vector<int> ans;
        subsetSumsHelper(0,arr,n,ans,0);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
int main(){
    vector<int>arr{3,2,1};
    Solution ob;
    vector<int>ans=ob.subset(arr,arr.size());
    sort(ans.begin(), ans.end());
  cout<<"The sum of each subset is "<<endl;
  for (auto sum: ans) {
    cout << sum << " ";
  }
  cout << endl;
}