#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    bool flag=false;
    vector<int>v;
    for(int i=0;i<t;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    for(int i=0;i<t;i++){
        if(v[i] == 1){
            flag =true;
        }
    }
    if(flag == true){
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }
}