#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v;
    while(n--){
        int element;
        cin>>element;
        v.push_back(element);
    }
    double average = 0;
    double sum=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
    }
    average = sum/v.size(); 
    cout<<"Average of the numbers is : " << average;
}