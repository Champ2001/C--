#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<7;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int i=0;
    int page=v[0];
    while (page<n)
    {
        i++;
        page += v[i];
        i%=7;
    }
    cout<<i+1;
}