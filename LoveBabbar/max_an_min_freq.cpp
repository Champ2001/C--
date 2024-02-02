#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,1,2,3,4,3,1};
    unordered_map<int,int>mpp;
    for(int i=0;i<8;i++){
        mpp[arr[i]]++;
    }
    int maxElement=-1;
    int minElement=-1;
    int maxfreq=INT_MIN;
    int minfreq=INT_MAX;
    for(auto &it: mpp){
        if(it.second >maxfreq){
            maxfreq=it.second;
            maxElement=it.first;
        }
        if(it.second < minfreq){
            minfreq=it.second;
            minElement=it.first;
        }
    }
    cout<<maxElement << "-> " << maxfreq<<endl;
    cout<<minElement << "-> " << minfreq;
}