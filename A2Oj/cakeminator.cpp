#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    // vector<vector<int>>vis(n,vector<int>(m,0));
    vector<vector<char>>matrix;
    for(int i=0;i<n;i++){
        vector<char>rows;
        for(int j=0;j<m;j++){
            char value;
            cin>>value;
            rows.push_back(value);
        }
        matrix.push_back(rows);
    }
    int rowcnt=0, colcnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j] == 'S'){
                rowcnt++;
                colcnt++;
            }
        }
    }
    int ans=(n*m)-(rowcnt*colcnt);
    cout<<ans;
}