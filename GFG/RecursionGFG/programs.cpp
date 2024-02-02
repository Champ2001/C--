#include <bits/stdc++.h>
using namespace std;
void printNto1(int n){
    if(n == 0){
        return;
    }
    cout<<n;
    printNto1(n-1);
}
void print1toN(int n){
    if(n==0){
        return ;
    }
    print1toN(n-1);
    cout<<n<<" ";
}
int getSum(int n){
    if(n == 0){
        return 0;
    }
    return n+getSum(n-1);
}
bool palindrome(string str,int start,int end){
    if(start >= end){
        return true;
    }
    return((str[start] == str[end]) && (palindrome(str,start+1,end-1)));
}
int sumOfDigits(int n){
    if(n <10){
        return n;
    }
    return sumOfDigits(n/10)+(n%10);
}
int maxCuts(int n,int a,int b,int c){
    if(n == 0){
        return 0;
    }
    if(n <= -1){
        return -1;
    }
    int res=max(maxCuts(n-a,a,b,c),max(maxCuts(n-b,a,b,c),maxCuts(n-c,a,b,c)));
    if(res == -1){
        return -1;
    }
    return res+1;
}
void printSub(string curr,string str,int index){
    if(index == str.length()){
        cout<<curr<<" ";
        return;
    }
    printSub(curr,str,index+1);
    printSub(curr,str+curr[index],index+1);
}
void TowerOfhanoi(int n,char a,char b,char c){
    if(n == 1){
        cout<<"Move 1 from " <<a<<"to "<<c<<endl;
        return ;
    }
    TowerOfhanoi(n-1,a,c,b);//move a to b using c as helper...
    cout<<"Move "<<n<<"from "<<a<<"to "<<c<<endl;
    TowerOfhanoi(n-1,b,a,c);//move from b to c using a as helper...
}
//Count number of ways for reaching an N cross M matrix's end Google problem
int count(int n,int m){
    if(n==1 || m== 1){
        return 1;
    }
    count(n-1,m)+count(n,m-1);
}
int Josephus(int n,int k){
    if(n == 1){
        return 0;
    }
    return (Josephus(n-1,k)+k)%n;
}
int countNumberofsubsetSum(int arr[],int n,int sum){
    if(n == 0){
        return (sum==0)?1:0;
    }
    return countNumberofsubsetSum(arr,n-1,sum)+countNumberofsubsetSum(arr,n-1,sum-arr[n-1]);
}
void permuteHelp(int index,vector<vector<int>>&ans,vector<int>&nums){
    if(nums.size() == index){
         ans.push_back(nums);
         return ;
    }
    for(int i=index;i<nums.size();i++){
        swap(nums[index],nums[i]);
        permuteHelp(index+1,ans,nums);
        swap(nums[index],nums[i]);
    }
}
