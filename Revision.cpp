//!mark matrix zeros
//! three sum efficient
//! phone number problem
//! permutation

#include<bits/stdc++.h>
using namespace std;

void solve(int i , int j , vector<string>&ans, vector<vector<int>>&vis, int di[], int dy[], string move, int n, int m){
  if(i == n-1 && j == n-1){
    ans.push_back(move);
    return;
  }
  string directions ="DLRU";

  for(int ind = 0;ind < 4;ind++){
    int nexti = i + di[ind];
    int nextj = j + dy[ind];

    if(nexti >= 0 && nextj >=0 && nexti < n && nextj<n && !vis[nexti][nextj] ){
      vis[i][j] = 1;
      solve(nexti, nextj, ans, vis, di, dy, move+directions[ind],n, a);
      vis[i][j] = 0;
  }
}

vector<string>findPath(vector<vector<int>>& m, int n ){
  vector<string>ans;
  vector<vector<int>>vis(n, vector<int>(n, 0));
  int di[]={+1,0,-1,0};
  int dj[]={0,1,0,-1};

  if(m[0][0] == 1)solve(0,0,ans,vis,di,dy,"",n,m);

  return ans;
}