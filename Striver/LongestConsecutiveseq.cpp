#include<bits/stdc++.h>
using namespace std;
int longestconsecutive(vector<int> &nums){
    set<int>hashset;
    for(int num:nums){
        hashset.insert(num);
    }
    int longeststreak=0;
    for(int num:nums){
        if(!hashset.count(num-1)){
            int currentnum=num;
            int currentstreak=1;
            while(hashset.count(currentnum+1)){
                currentnum+=1;
                currentstreak+=1;
            }
            longeststreak=max(longeststreak,currentstreak);
        }
    }
    return longeststreak;
}
int main(){
    vector<int> arr{100,200,1,2,3,4};
    int lon=longestconsecutive(arr);
    cout<<"Longest Consecutive sequence is : "<<lon<<endl;
}