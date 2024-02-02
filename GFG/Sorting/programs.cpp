#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int n){
    //Its a stable algorithm
    bool swapped;
    for(int i=0;i<n;i++){
        swapped=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j] >arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped == false){
            break;
        }
    }
}
void selectionSorting(int arr[], int n){
    for(int i = 0; i < n; i++){
        int min_ind = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[min_ind]){
                min_ind = j;
            }
        }
        swap(arr[i], arr[min_ind]);
    } 
}
void MergeTwoSortedArray_naive(int arr1[],int arr2[],int n,int m){
    int copy[n+m];
    for(int i=0;i<n;i++){
        copy[i]=arr1[i];
    }
    for(int j=0;j<m;j++){
        copy[j+n]=arr2[j];
    }
    sort(copy,copy+n+m);
    for(int i=0;i<n+m;i++){
        cout<<copy[i];
    }
}
void MergeTwoSortedArray_efficient(int arr1[],int arr2[],int n,int m){
    int i=0,j=0;
    if(arr1[i]<arr2[j]){
        cout<<arr1[i++];
    }
    else{
        cout<<arr2[j++];
    }
    while(i<n){
        cout<<arr1[i++];
    }
    while(j<m){
        cout<<arr2[j++];
    }
}
void merger(int a[],int low,int mid,int high){
    int size1=mid-low+1;
    int size2=high-mid;
    int left[size1];
    int right[size2];
    for(int i=0;i<size1;i++){
        a[i]=left[low+i];
    }
    for(int j=0;j<size2;j++){
        a[j]=right[mid+1+j];
    }
    int i=0,j=0,k=low;
    while(i<size1 && j<size2){
        if(left[i]<=right[j]){
            a[k++]=left[i++];
        }
        else{
            a[k++]=right[j++];
        }
        while(i<size1){
            a[k++]=left[i++];
        }
        while(j<size2){
            a[k++]=right[j++];
        }
    }
}
void merge(int arr[],int left,int right){
    if(right>left){
        int mid=left+(right-left)/2;
        merge(arr,left,mid);
        merge(arr,mid+1,right);
        merger(arr,left,mid,right);
    }
}

void intersection_naive(int a[],int b[],int m,int n){
    for(int i=0;i<m;i++){
        if(i>0 && a[i] ==a[i-1]){
            continue;
            for(int j=0;j<n;j++){
                if(a[i] ==b[j]){
                    cout<<a[i]<<" ";
                    break;
                }
            }
        }
    }
}

void intersection_efficient(int a[],int b[],int m,int n){
    int i=0,j=0;
    while(i<m && j<n){
        if(i>0 && a[i]==a[i-1]){
            i++;
            continue;
        }
        if(a[i] <b[j]){
            i++;
        }
        else if(a[i] >a[j]){
            j++;
        }
        else{
            cout<<a[i];
            i++;
            j++;
        }
    }
}
int printUnion_naive(int a[],int b[],int m,int n){
    int c[m+n];
    for(int i=0;i<m;i++){
        c[i]=a[i];
    }
    for(int i=0;i<n;i++){
        c[i+m]=b[i];
    }
    sort(c,c+m+n);
    for(int i=0;i<m+n;i++){
        if(i==0 ||c[i] != c[i-1]){
        cout<<c[i];
    }
}    
}
void printUnion(int a[],int b[],int m,int n){
    int i=0,j=0;
    while(i<m && j<n){
        if(i>0 && a[i] = a[i-1]){
            i++;
            continue;
        }
        if(j>0 && a[j] ==a[j-1]){
            j++;
            continue;
        }
        if(a[i] <b[j]){
            cout<<a[i];
            i++;
        }
        else if(a[i]<b[j]){
            cout<<b[j];
            j++;
        }
        else{
            cout<<a[i];
            i++;
            j++;                    
        }
    }
}
