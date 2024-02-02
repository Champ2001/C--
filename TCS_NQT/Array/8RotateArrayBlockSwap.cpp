#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v = {1,2,3,4,5,6,7};
   int K=3;
   int N = v.size();
   for(int i =0;i<K;i++){
    swap(v[i],v[N-K+i]);
   }
   for(int i=0;i<N;i++){
    cout<<v[i] <<" ";
   }
}