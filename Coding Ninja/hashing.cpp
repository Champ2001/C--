#include<bits/stdc++.h>
using namespace std;
vector<int> removeDuplicates(int *a,int size){
    vector<int>output;
    unordered_map<int ,bool>seen;
    for(int i=0;i<size;i++){
        if(seen.count(a[i] >0)){
            continue;
        }
        seen[a[i]]=true;
        output.push_back(a[i]);
    }
}

int main() {
	int a[] = {1,2,3,3,2,1,4,3,6,5,5};
	vector<int> output = removeDuplicates(a, 11);
	for (int i = 0; i < output.size(); i++) {
		cout << output[i] << endl;
	}
}
int maxFrequency(vector<int>arr,int n){
    unordered_map<int,int>frequency;
    int maxelement=0;
    int maxfrequency=0;
    for(int i=0;i<n;i++){
        frequency[arr[i]]++;
        maxfrequency=max(maxfrequency,frequency[arr[i]]);
    }
    for(int i=0;i<n;i++){
        if(maxfrequency == frequency[arr[i]]){
            maxelement=arr[i];
            break;
        }
    }
    return maxelement;
}

