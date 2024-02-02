#include<bits/stdc++.h>
using namespace std;
void sumP(int index,int arr[],vector<int>&ds,int s,int sum,int n){
    if(index == n){
        if(s==sum){
            for(auto it: ds){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    //if we take that particular element in the subsequence
    ds.push_back(arr[index]);
    s+=arr[index];
    sumP(index+1,arr,ds,s,sum,n);
    s-=arr[index]; //remove the elements impact on sum for next recursion calls;
    ds.pop_back(); // remove the element 
    //if we do not pick that particular element
    sumP(index+1,arr,ds,s,sum,n);

}
int main(){
    int arr[]={1,2,1};
    int sum=2;
    int n=3;
    int s=0;
    vector<int>ds;
    sumP(0,arr,ds,0,sum,n);
}