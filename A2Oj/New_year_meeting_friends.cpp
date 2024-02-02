#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>v;
    for(int i=0;i<3;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int dist=(abs(v[1]-v[0]))+(abs(v[2]-v[1]));
    cout<<dist;
}