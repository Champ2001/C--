#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int x,int low,int high){
    int mid=(low+high)/2;
    if(arr[mid] == x){
        return arr[mid];
    }
    else if(arr[mid] < x){
        return binarySearch(arr,x,mid+1,high);
    }
    else{
        return binarySearch(arr,x,low,mid-1);
    }
}
int getpeak_naive(int arr[],int n){
    if(n==0){
        return arr[0];
    }
    if(arr[0] >= arr[1]){
        return arr[0];
    }
    if(arr[n-1] >= arr[n-2]){
        return arr[n-1];
    }
    for(int i=1;i<n-1;i++){
        if(arr[i] >= arr[i-1] && arr[i] >= arr[i+1]){
            return arr[i];
        }
    }
}
int getpeak(int arr[],int n){
    int low=0;
    int high=n-1;
    while(low <= high){
        int mid=(low+high)/2;
        if((mid == 0 || arr[mid]>arr[mid-1]) && (mid == n-1 || arr[mid]>arr[mid+1])){
            return mid;
        }
        else if(mid>0 && arr[mid-1] > arr[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}
bool isPair_naive(int arr[],int n,int x){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j] == x){
                return true;
            }
        }
    }
    return false;
}
bool isPair(int arr[],int n,int x){
    int left=0,right=n-1;
    for(int i=0;i<n;i++){
        if(arr[left] + arr[right] == x){
            return true;
        }
        else if(arr[left] + arr[right] < x){
            left=left+1;
    }
    else{
        right=right-1;
    }
    }
    return false;
}
vector<vector<int>> Threesum(vector<int> &nums){
    vector<vector<int>>res;
    int n=nums.size();
    for(int i=0;i<nums.size()-2;i++){
        if(i==0 || nums[i]!= nums[i-1]){
            int low=i+1;
            int high=n-1;
            int sum=0-nums[i];
            while(low<=high){
            if(nums[low]+nums[high] == sum){
                vector<int>temp;
                temp.push_back(nums[i]);
                temp.push_back(nums[low]);
                temp.push_back(nums[high]);
                res.push_back(temp);

                while(low<high && nums[low]==nums[low+1])low++;
                while(low<high && nums[high] == nums[high-1])high--;
                low++;
                high--;
            }
            else if(nums[low] +nums[high] >sum){
                high--;
            }
            else{
                low++;
            }
        }
    }
}
return res;
}

double findMedianOftwoSortedArrays(vector<int>&nums1,vector<int>&nums2){
    if(nums1.size() >nums2.size()){
        return findMedianOftwoSortedArrays(nums2,nums1);
    }
    int n1=nums1.size();
    int n2=nums2.size();
    int low=0,high=n1;

    while(low<=high){
        int cut1=(low+high)>>1;
        int cut2=(n1+n2+1)/2 -cut1;

        int left1=(cut1==0)?INT_MIN:nums1[cut1-1];
        int left2=(cut2==0)?INT_MIN: nums2[cut2-1];
        int right1= (cut1==n1)?INT_MAX:nums1[cut1];
        int right2=(cut2==n2)?INT_MAX:nums2[cut2];

        if(left1 <= right2 && left2<=right1){
            if((n1+n2)%2 == 0){
                return max(left1,left2)+min(right2,right1)/2.0;
            }
            else{
                return max(left1,left2);
            }
        }
        else if(left1>right2){
            high=cut1-1;
        }
        else{
            low=cut1+1;
        }
    }
    return 0.0;
}
int repeatingElements_efficient(int arr[],int n){
    bool visit[n];
    memset(visit,false,sizeof(visit));
    for(int i=0;i<n;i++){
        if(visit[i]){
            return arr[i];

        }
        visit[arr[i]]=true;
    }
    return -1;
}
int repeatingElements_mostEfficient(vector<int>&nums){
    int fast=nums[0];
    int slow=nums[0];
    do{
        fast=nums[nums[fast]];
        slow=nums[slow];
    }while(slow!=fast);
    fast=nums[0];
    while (slow !=fast)
    {
        fast=nums[fast];
        slow=nums[slow];
    }
    return slow;
}
bool isPossible(vector<int>&A,int pages,int student){
    int cnt=0;
    int sumAllocated=0;
    for(int i=0;i<A.size();i++){
        if(sumAllocated+A[i] >pages){
            cnt++;
            sumAllocated=A[i];
            if(sumAllocated >pages)return false;
        }
        else{
            sumAllocated+=A[i];
        }
    }
    if(cnt <student)return true;
    return false;
}
int books(vector<int>&A,int B){
    int low=A[0];
    int high=0;
    for(int i=0;i<A.size();i++){
        low=min(low,A[i]);
        high+=A[i];
    }
    while(low <= high){
        int mid=(low+high)>>1;
        if(isPossible(A,mid,B)){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;                                             
}       