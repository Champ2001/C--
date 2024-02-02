#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int>v ={1,2,3,4,5};
    int low=0;
    int high=v.size()-1;
    while(low<=high){
        int temp = v[low];
        v[low] = v[high];
        v[high]=temp;
        low++;
        high--;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}