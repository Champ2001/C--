#include<bits/stdc++.h>
using namespace std;
class Minheap{
    int size;
    int capacity;
    int *arr;
    public:
    Minheap(int c){
        capacity=c;
        size=0;
        arr=new int[c];
    }
    int left(int i){
        return (2*i+1);
    }
    int right(int i){
        return (2*i+2);
    }
    int parent(int i){
        return (i-2)/2;
    }
    void insert(int x){
        if(size ==capacity){
            return;
        }
        size++;
        arr[size-1]=x;
        for(int i=size-1;i!=0 && arr[parent(i)] >arr[i]){
            swap(arr[i],arr[parent(i)]);
            i=parent(i);
        }
    }
    void minHeapify(int i){
        int lt=left(i);
        int rt=right(i);
        int smallest=i;
        if
    }
};