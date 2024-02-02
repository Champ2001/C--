#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threesum(vector<int> &num){
vector<vector<int>> res;
for(int i=0;i<num.size()-2;i++){
    if(i==0 || num[i] !=num[i-1]){
        int low=i+1,high=num.size()-1,sum=0-num[i];
        while(low<high){
            if(num[low]+num[high] == sum){
                vector<int>temp;
                temp.push_back(num[i]);
                temp.push_back(num[low]);
                temp.push_back(num[high]);
                res.push_back(temp);
            
            while(low<high && num[low]==num[low+1])low++;
            while(low<high && num[high]==num[high-1])high--;
            low++,high--;
        }
        else if(num[low]+num[high] <sum)low++;
        else
        high--;
    }
}
}
return res;
}