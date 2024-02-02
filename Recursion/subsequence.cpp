#include<bits/stdc++.h>
using namespace std;
void Printsub(int index,int arr[],vector<int>&ds,int n){
    if(index == n){
        for(auto it:ds){
            cout<<it<<" ";
            }
            if(ds.size() == 0){
                cout<<"{}";
        }
        cout<<endl;
        return;
    }
    //choose or pick the element case
    ds.push_back(arr[index]);
    Printsub(index+1,arr,ds,n);
    ds.pop_back();//for removal for the next recursion call
    //do not choose the element case i.e the element is not added to your subsequence
    Printsub(index+1,arr,ds,n);
}
int main(){
    int arr[]={3,1,2};
    vector<int>ds;
    int n=3;
    Printsub(0,arr,ds,n);
}