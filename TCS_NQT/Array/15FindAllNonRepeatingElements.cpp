#include<bits/stdc++.h>
using namespace std;

void findnonRepeatingSort(vector<int>&v){
    int n= v.size();
    vector<int>arr;
    sort(v.begin(), v.end());

    if(v[0] != v[1]){
        arr.push_back(v[0]);
    }
    for(int i = 1;i<n-1;i++){
        if(v[i-1]!=v[i] && v[i] != v[i+1]){
            arr.push_back(v[i]);
        }
    }
    if(v[n-2] != v[n-1]){
        arr.push_back(v[n-1]);
    }

    for(int i =0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}

void findnonRepeatingMap(vector<int>&v){
    unordered_map<int,int>mp;
    for(auto it :v){
        mp[it]++;
    }
    for(auto it :mp){
        if(it.second == 1){
            cout<<it.first<<" ";
        }
    }
}

int main(){
    vector<int>v = {1,2,-1,1,3,1};
    findnonRepeatingMap(v);
}