#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={1,2,1,1,5,1};
    int sum = 0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
    }
    int initialsum = 0 ;
    int sumSTL= accumulate(v.begin(),v.end(),initialsum);
    //for vector accumulate function should look like this .For arrays accumulate(arr,arr+size,initialsum)
    cout<<sum<<endl;
    cout<<sumSTL;
}