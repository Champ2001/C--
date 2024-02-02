#include<bits/stdc++.h>
using namespace std;

int smallest(vector<int>&arr){
    sort(arr.begin() ,arr.end());
    return arr[0];
}

int smallestEff(vector<int>&arr){
    int small= arr[0];
    for(int i = 1;i<arr.size();i++){
        if(arr[i] < small){
            small = arr[i]; 
        }
    }
    return small;
}

int main(){
    vector<int>arr1 = {3,7,9,8,4};
    int small = smallestEff(arr1);
    cout<<small;
}