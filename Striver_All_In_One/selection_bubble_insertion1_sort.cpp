#include<bits/stdc++.h>
// Select minimum and swap the elements 
using namespace std;
void selection_sort(int arr[], int n) {
  // selection sort in all cases Time complexity is O(n^2)
  for (int i = 0; i < n - 1; i++) {
    int mini = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[mini]) {
        mini = j;
      }
    }
    int temp = arr[mini];
    arr[mini] = arr[i];
    arr[i] = temp;
  }

  cout << "After selection sort: " << "\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";

}
void bubble_sort(int arr[], int n){
    //Best case if array is sorted then Time complexity is O(n).Worst case is O(n^2)
    //Push the maximum element to the last by making swaps of adjacent element swaps .
    for(int i=n-1;i>=0;i--){
            int didswap=0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                didswap=1;
            }
        }
        if(didswap == 0)//means already in right place .no need to check for rest part
        {
            break;
        }
    }
}
void insertion_sort(int arr[],int n){
  //Time complexity for best case is O(n) as everyone is at its correct position.Otherwise worst case is O(n^2)
  for(int i=0;i<=n-1;i++){
    int j=i;
    while(j>0 && arr[j-1]>arr[j]){
      int temp=arr[j-1];
      arr[j-1]=arr[j];
      arr[j]=temp;
      j--;//after swapping lets go left;
    }
  }
}
int main() {
  int arr[] = {13,46,24,52,20,9};
  int n = sizeof(arr) / sizeof(arr[0]);
   cout << "Before selection sort: " << "\n";
   for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
  selection_sort(arr, n);
  return 0;
}