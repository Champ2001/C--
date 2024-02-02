#include<bits/stdc++.h>
using namespace std;

int largest(vector<int>&v){
    int large=v[0];
    for(int i = 1 ;i<v.size();i++){
        if(v[i] >large){
            large = v[i];
        }
    }
    return large;
}

int main(){
    vector<int>v = {5,8,1,6,9,12};
    int large = largest(v);
    cout<<large;
}