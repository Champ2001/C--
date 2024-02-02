#include<bits/stdc++.h>
using namespace std;

void frequency(vector<int>&v,int n){
    unordered_map<int,int>map;
    for(int i=0;i<n;i++){
        map[v[i]]++;
    }
    for(auto it : map){
        cout<<"Frequency of "<<it.first <<" is "<< it.second<<endl;
    }
}

int main(){
    vector<int>v = {2,4,2,5,6,6,4,8,7,5,2,2};
    int n= v.size();
    frequency(v,n);
}