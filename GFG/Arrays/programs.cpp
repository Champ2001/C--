#include<bits/stdc++.h>
using namespace std;
int intlargestefficient(int arr[],int n){
    int res=0;
    int largest;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[res]){
            res=i;
        }
        return res;
    }
}
int largestnaive(int arr[],int n){
    int result;
    for(int i=0;i<n;i++){
        bool flag=true;
        for(int j=0;j<n;j++){
            if(arr[i]<arr[j]){
                flag=false;
            }
        }
        if(flag== true){
            result=i;
        }
    }
    return result;
}
bool isSortednaive(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                return false;
            }
        }
        return true;
    }
}
bool issortedeff(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            return false;
        }
    }
    return true;
}
int reverse(int arr[],int n){
    int low=0,high=n-1;
    for(int i=0;i<n;i++){
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
}
int duplipate_naive(int arr[],int n){
    int temp[n];
    temp[0]=arr[0];
    int res=1;
    for(int i=1;i<n;i++){
        if(temp[res-1] != arr[i]){
            temp[res]=arr[i];
            res++;
        }
    }
    for(int i=0;i<res;i++){
        arr[i]=temp[i];
}
}
int duplicate_efficient(int arr[],int n){
    int res=1;
    for(int i=1;i<n;i++){
        if(arr[res-1] != arr[i]){
            arr[res]=arr[i];
            res++;
        }
    }
}
int removeZerotoend_naive(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
        for(int j=i+1;j<n;j++){
            if(arr[j] != 0){
                swap(arr[i],arr[j]);
            }
            }
        }
    }
}
int removeZeroToend_efficient(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
}
int leftRotate(int arr[],int n){
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}
void leftRotateBY_D_naive(int arr[] ,int n,int d){
    for(int i=0;i<d;i++){
        leftRotate(arr,n);
    }
}
int leftRotateAnArray_by_d_better(int arr[],int n,int d){
    int temp[d];
    if(n<d){
        d=d%n;
    }
    for(int i=0;i<d;i++){//copy the first d elements in the temp array.will consume O(n) extra space
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]=temp[i];
    }
    for(int i=0;i<d;i++){
        arr[n-d-i]=temp[i];
    }
}
int reverse(int arr[],int low,int high){
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
int leftRotate_by_d_efficient(int arr[],int n,int d){
    reverse(arr,0,d-1);//first reverse the first d elements
    reverse(arr,d,n-1); // reverse the remaining elements after d
    reverse(arr,0,n-1); // reverse the complete array
}

void leaders_naive(int arr[],int n){
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<=arr[j]){
                flag=true;
                break;
            }
        }
        if(flag == false){
            cout<<arr[i];
        }
    }
}

void leadersInAnArray_efficient(int arr[],int n){
    int curr_leader=arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(curr_leader <arr[i]){
            curr_leader=arr[i];
            cout<<arr[i];
        }
    }
}

int max_difference_naive(int arr[],int n){
    int maxi=0;
    int max_diff=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            maxi=arr[j]-arr[i];
              if(maxi> max_diff)
        max_diff=maxi;
    
        }
      
    }
    return max_diff;
}

int max_difference_efficient(int arr[],int n){
    int max_diff=arr[1]-arr[0];
    int minValue=arr[0];
    for(int i=1;i<n;i++){
        max_diff=max(max_diff,arr[i]-minValue);
        minValue=min(minValue,arr[i]);
    }
    return max_diff;
}

int maxConsecutiveOnes(int arr[],int n){
    int count=0;
    int maxi=0;
    for(int i=0;i<n;i++){
        if(arr[i] == 1){
            count++;
        }
        else{
            count=0;
        }
        maxi=max(maxi,count);
    }
    return maxi;
}

int maxSubArraySum(vector<int>nums){ // kadane's algorithm  
    int sum=0;
    int maxi=0;
    for(auto num:nums){
        sum+=num;
        maxi=max(maxi,sum);
        if(sum < 0){ //we take the sum as long as the sum is 0
            sum=0;
        }
    }
}

int even_odd_subArray_naive(int arr[],int n){
    int maxi=1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int cur=1;
            if((arr[j] % 2 == 0 && arr[j-1] %2 != 0) || (arr[j] %2 !=0 && arr[j-1] %2 ==0)){
            cur++;
            }
            else{
                break;
            }
             maxi=max(maxi,cur);
        }
    }
   return maxi;
}

int even_odd_subArray_efficient(int arr[],int n){
    int maxi=1;
    int cur=1;
    for(int i=0;i<n;i++){
        if((arr[i] %2 ==0 && arr[i-1] != 0) || (arr[i] %2 != 0 && arr[i-1] % 2 == 0)){
            cur++;
            maxi=max(maxi,cur);
        }
        else{
            cur=1;
        }
    }
}

int maxcircularSum_naive(int arr[],int n){
    int index=0;
    int final_max=arr[0];
    for(int i=0;i<n;i++){
        int cur_max=arr[i];
        int cur_sum=arr[i];
        for(int j=i+1;j<n;j++){
            index=(i+j)%n;
            cur_sum+=arr[index];
            cur_max=max(cur_max,cur_sum);
        }
        final_max=max(final_max,cur_max);
    }
    return final_max;
}

int normal_max_kadane(int arr[],int n){
    int sum=0;
    int maxi=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
         maxi=max(maxi,sum);
         if(sum <0){
            sum=0;
         }
    }
    return maxi;
}
int max_circular_sum_efficient(int arr[],int n){
    int max_normal=normal_max_kadane(arr,n);
    int arr_sum=0;
    if(max_normal <0){
        return max_normal;
    }
    for(int i=0;i<n;i++){
        arr_sum+=arr[i];
        arr[i]=-arr[i];
    }
    int max_circular=arr_sum+normal_max_kadane(arr,n);
    return max(max_circular,max_normal);
}

int majority_naive(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                count++;
                if(count >n/2){
                    return i;
                }
            }
        }
    }
    return -1;
}

int majority_efficient_Moore_voting_algo(vector<int> nums){
    int count=0;
    int candidate=0;
    for(auto num:nums){
        if(count == 0){
            candidate=num;
        }
        if(num == candidate){
            count++;
        }
        else{
            count --;
        }
    }
    return candidate;
}

int findMajority(int arr[], int n)
{
	int res = 0, count = 1;

    	for(int i = 1; i < n; i++)
    	{
    		if(arr[res] == arr[i])
    			count++;
    		else 
    			count --;

    		if(count == 0)
    		{
    			res = i; count = 1;
    		}
    	}

    	count = 0;

    	for(int i = 0; i < n; i++)
    		if(arr[res] == arr[i])
    			count++;

    	if(count <= n /2)
    		res = -1;

    	return res; 
}

int minConsecutivesFlips_naive(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i-1] != arr[i]){
            if(arr[i] != arr[0]){
                cout<<"From "<<i <<" to ";
            }
            else{
                cout<<i-1 <<endl;
            }
        }
        if(arr[n-1] != arr[0]){
            cout<<n-1 <<endl;
        }
    }
}

int maxSum_naive(int arr[],int n,int k){
    int res=INT_MIN;
    for(int i=0;i+k-1<n;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=arr[i+j];
            res=max(res,sum);
        }
        return res;
    }
}

int maxSum_Sliding_window_technique(int arr[],int n,int k){
    int cur_sum=0;
    int maxi=0;
    for(int i=0;i<k;i++){ //take the sum of first k elements 
        cur_sum+=arr[i];
    }
    for(int i=k;i<n;i++){
        cur_sum=cur_sum+arr[i]-arr[i-k]; // take the sum using sliding window technique
        //take some element and subtract some other element
        maxi=max(maxi,cur_sum);
    }
    return maxi;
}

bool isSubArray_naive(int arr[],int n,int sum){
    int sum_now=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum_now+=arr[i];
            if(sum ==  sum_now){
                return true;
            }
        }
        return false;
    }
}

bool isSubArray_efficient_sliding_window(int arr[],int n,int sum){
    int start=0,cur_sum=0;
    for(int end=0;end<n;end++){
        cur_sum+=arr[end];
        if(cur_sum >sum){
            cur_sum-=arr[start];
            start++;
        }
        if(cur_sum == sum){
            return true;
        }
    }
}

int getsum(int arr[],int n,int start,int end){
    int sum=0;
    for(int i=start;i<end;i++){
        sum+=arr[i];
    }
    return sum;
}

//[2,8,3,9,6,5,4]
//Psum=[2,10,13,22,28,33,37] getsum(0,2)=psum[2] getsum(1,3)=psum[3]-psum[0]

//getsum(start,end)={psum[end] if start ==0}
              //    {psum[end] - psum[start-1]} 
int prefix_sum(int arr[],int n){
    int prefix[n];
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
}              

int equilibrium_naive(int arr[],int n){
    int leftsum=0;
    int rightsum=0;
    int equilibrium=-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            leftsum+=arr[j];
        }
        for(int k=i+1;k<n;k++){
            rightsum+=arr[k];
        }
        if(leftsum == rightsum){
            equilibrium=i;
            break;
        }
    }
    if(equilibrium ==-1){
        cout<<"NO ";
    }
}

bool Equilibrium_efficient(int arr[],int n){
    int leftsum=0;
    int rightsum=0;
    for(int i=0;i<n;i++){
        rightsum+=arr[i];
    }
    for(int i=0;i<n;i++){
        rightsum-=arr[i];
        if(leftsum == rightsum){
            return true;
        }
        leftsum+=arr[i];
    }
    return false;
}

int maxAppear_naive(int left[],int right[],int n){
    int freq[100]={0};
    for(int i=0;i<n;i++){
        for(int j=left[i];j<right[i];j++){
            freq[i]+=1;
        }
    }
    int res=0;
    for(int i=0;i<100;i++){
        if(freq[i] >freq[res]){
            res=i;
        }
    }
    return res;
}

int maxAppear(int left[],int right[],int n){
    int freq[101]={0};
    for(int i=0;i<n;i++){
        freq[left[i]]++;
        freq[right[i]+1]--;
    }
    int res=0;
    for(int i=1;i<100;i++){
        //freq[i]=freq[i-1]+arr[i];
        if(freq[i] > freq[res]){
            res=i;
        }
    }
    return res;
}

int trapping_rainwater_naive(int arr[],int n){
    int res=0;
    for(int i=1;i<n-1;i++){
        int leftmax=arr[i];
        for(int j=0;j<i;j++)
            leftmax=max(leftmax,arr[j]);
        int rightmax=arr[i];
        for(int j=i+1;j<n;j++)
            rightmax=max(rightmax,arr[j]);
        res=res+(min(rightmax,leftmax)-arr[i]);
        }
        return res;
}

int trapping_rainwater_efficient(int arr[],int n){
    int prefix[n];
    int suffix[n];
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[n]=max(prefix[i-1],arr[i]);
    }
    suffix[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        suffix[n]=max(suffix[i+1],arr[i]);
    }
    int waterTrapped=0;
    for(int i=0;i<n;i++){
        waterTrapped+=min(prefix[i],suffix[i])-arr[i];
    }
}
