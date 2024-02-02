#include <iostream>
#include <cmath>
#include<bits/stdc++.h>
using namespace std;


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


int main() {
	
      int arr[] = {2, 3, 10, 6, 4, 8, 1}, n = 7;

      cout<<max_difference_naive(arr, n);
    
}