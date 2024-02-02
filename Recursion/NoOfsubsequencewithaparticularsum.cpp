#include<bits/stdc++.h>
using namespace std;
int sumP(int index,int arr[],int s,int sum,int n){
    if(index == n){
        //condition satisfied
        if(s==sum){
            return 1;
        }
        //condition not satisfied
        return 0;
    }
    
    s+=arr[index];
    int left=sumP(index+1,arr,s,sum,n);//do whatever recursion call is there in left
    
    s-=arr[index]; //remove the elements impact on sum for next recursion calls;
    
    //if we do not pick that particular element
    int right=sumP(index+1,arr,s,sum,n);//do whatever recursion call is there on right
    return left+right;

}
int main(){
    int arr[]={1,2,1};
    int sum=3;
    int n=2;
    int s=0;
    vector<int>ds;
    cout<<sumP(0,arr,0,sum,n);
}