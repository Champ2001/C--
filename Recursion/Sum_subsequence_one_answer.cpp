#include<bits/stdc++.h>
using namespace std;
bool sumP(int index,int arr[],vector<int>&ds,int s,int sum,int n){
    if(index == n){
        if(s==sum){
            for(auto it: ds){
                cout<<it<<" ";
            }
            cout<<endl;
            return true;// if sum is equal to s then return a true 
        }
        return false;// if does not matches return false
    }
    //if we take that particular element in the subsequence
    ds.push_back(arr[index]);
    s+=arr[index];
    if(sumP(index+1,arr,ds,s,sum,n) == true) return true;//if it matches no need do to further recursion calls

    s-=arr[index]; //remove the elements impact on sum for next recursion calls;
    ds.pop_back(); // remove the element 
    //if we do not pick that particular element
    if(sumP(index+1,arr,ds,s,sum,n) == true) return true; // even if this returns a true no need to do further recursion calls
    
    return false;// if both of them does not returns true then return a false
}
int main(){
    int arr[]={1,2,1};
    int sum=2;
    int n=3;
    int s=0;
    vector<int>ds;
    sumP(0,arr,ds,0,sum,n);
}