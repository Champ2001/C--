#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x;
    vector<int>math , prog,eu;
    for(int i=1;i<=n;i++){
        cin>>x;
        if(x == 1)math.push_back(i);
        if(x==2)prog.push_back(i);
        if(x == 3)eu.push_back(i);
    }
    int ans;
    ans=min(math.size(), min(prog.size() , eu.size()));
    cout<<ans<<endl;
    for(int i=0;i<ans;i++){
        cout<<math[i] << " " << prog[i] << " "<< eu[i] ;
    }
}