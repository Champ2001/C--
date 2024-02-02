#include <bits/stdc++.h>
using namespace std;

void merge_sort(int arr[],int low,int high){
    int mid=(low+high)>>1;
    if(low>= high){
        return ;
    }
    merge_sort(arr,low,mid+1);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
void merge(int arr[],int low,int mid,int high){
    int left=low;
    int right=mid+1;
    vector<int>ans;
    while(low<= mid && right <= high){
        if(arr[left] <= arr[right]){
            ans.push_back(arr[left]);
            left++;
        }
        else{
            ans.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        ans.push_back(arr[left]);
        left++;
    }
    while(right <= high){
        ans.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=ans[i-low];
    }
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // bubble_sort(arr, n);
    return 0;
}