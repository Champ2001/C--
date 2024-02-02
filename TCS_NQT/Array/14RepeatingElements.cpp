#include<bits/stdc++.h>
using namespace std;

void findRepeating(vector<int>&v){
    sort(v.begin(), v.end());
    vector<int>dup;
    for(int i=0;i<v.size();i++){
        if(v[i] == v[i+1]){
            dup.push_back(v[i]);
        }
    }
}

void findRepeatingMaps(vector<int>&arr){
    unordered_map<int, int>mp;
    for(int i=0;i<arr.size();i++){
        mp[arr[i]]++;
    }
    for(auto it: mp){
        if(it.second >1){
            cout<<it.first<<" ";
        }
    }
}

int main(){
    vector<int>v={1,1,2,3,4,4,5,2};
    vector<int>duplicates;
    int n =v.size();
    for(int i=0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(v[i] == v[j]){
                duplicates.push_back(v[i]);
            }
        }
    }
    // for(int i = 0;i<duplicates.size();i++){
    //     cout<<duplicates[i]<<" ";
    // }

    vector<int>arr={1,1,2,3,4,4,5,2};
    findRepeatingMaps(arr);

}