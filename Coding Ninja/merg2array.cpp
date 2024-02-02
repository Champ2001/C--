#include<bits/stdc++.h>
using namespace std;
void merge2sortedArray(int arr1[],int arr2[],int size1,int size2,int ans[]){
    int i=0,j=0,k=0;
    while(i < size1 && j < size2){
        if(arr1[i] < arr2[j]){
            ans[k]=arr1[i];
            i++;
            k++;
        }
        else{
            ans[k] = arr2[j];
            j++;
            k++;
        }
    }
    if(i<size1){
        ans[k]=arr1[i];
        k++;
        i++;
    }
    if(j < size2){
        ans[k] =arr2[i];
        k++;
        j++;
    }
}

int maximiseSum(vector<int>& arr1, vector<int>& arr2, int size1, int size2) {
    int sum1=0,sum2=0;
    int maxSum=0;
    int i=0,j=0;
    while(i < size1 && j <size2){
        if(arr1[i] < arr2[j]){
            sum1+=arr1[i];
            i++;
        }
        else if(arr1[i] > arr2[j]){
            sum2+=arr2[j];
            j++;
        }
        else{
            maxSum+=max(sum1,sum2)+arr1[i];
            sum1=0;
            sum2=0;
            i++;
            j++;
        }
    }
    while(i < size1){
        sum1+=arr1[i];
        i++;
    }
    while(j < size2){
        sum2+=arr2[j];
        j++;
    }
    maxSum+=max(sum1,sum2);
    return maxSum;
}