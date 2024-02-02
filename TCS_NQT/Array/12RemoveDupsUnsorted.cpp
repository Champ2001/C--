#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={1,2,3,4,4,3,2,1};
    map<int,int>mp;
    for(int i =0;i<v.size();i++){
        if(mp.find(v[i]) == mp.end()){
            cout<<v[i]<<" ";
            mp[v[i]]++;
        }
    }
}