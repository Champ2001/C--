#include<bits/stdc++.h>
using namespace std;

vector<int>removedup(vector<int>&v){
    int i = 0 ;
    int j = i+1;

    while(j<v.size()){
        if(v[i] == v[j]){
            j++;
        }
        else{
            swap(v[i+1],v[j]);
            i++;
            j++;
        }
    }
    return v;
}

int main(){
    vector<int>v = {1,1,2,2,2,3,3};
    vector<int>remove=removedup(v);
    for(int i=0;i<remove.size();i++){
        cout<<remove[i] << " ";
    }
}
