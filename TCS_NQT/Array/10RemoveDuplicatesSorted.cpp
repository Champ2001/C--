#include<bits/stdc++.h>
using namespace std;

vector<int>removedup(vector<int>&v){
    set<int>st;
    for(int i =0;i<v.size();i++){
        st.insert(v[i]);
    }
    vector<int>copy(st.begin(),st.end());
    return copy;
}

int main(){
    vector<int>v = {1,1,2,2,2,3,3};
    vector<int>remove=removedup(v);
    for(int i=0;i<remove.size();i++){
        cout<<remove[i] << " ";
    }
}

