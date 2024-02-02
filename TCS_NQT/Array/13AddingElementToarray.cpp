#include<bits/stdc++.h>
using namespace std;

void insertAtBegin(int *arr, int n, int value){
    for(int i=n-1;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=value;
}


void insertAtPos(int *arr, int n, int value, int pos){
    for(int i=n;i>=pos;i--){
        arr[i] = arr[i-1];
    }
    arr[pos-1] =value;
}


int main(){
    int n=8;
    int arr[9]={10,9,14,8,20,48,16,9};
    int value=40;
    int pos=5;
    cout<<"Array before actions " ;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // insertAtBegin(arr, n, value);
    // cout<<"Array after insertion in beginning ";
    // for(int i =0;i<=n;i++){
    //     cout<<arr[i]<<" ";
    // }

    insertAtPos(arr,n,value,pos);
    cout<<"Array after insertion in beginning ";
    for(int i =0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}