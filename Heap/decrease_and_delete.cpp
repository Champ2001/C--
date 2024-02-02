#include<bits/stdc++.h>
using namespace std;
class MinHeap{
    int capacity;
    int size;
    int *arr;
    public:
    MinHeap(int c){
        capacity=c;
        size=0;
        arr =new int[c];
    }
    int left(int i){
        return (2*i+1);
    }
    int right(int i){
        return (2*i+2);
    }
    int parent(int i){
        return (i-1)/2;
    }
    void insert(int x){
        if(size==capacity){
            return;
        }
        arr[size-1]=x;
        size++;
        for(int i=0;i!=0 && arr[parent(i)]>arr[i];){
            swap(arr[i],arr[parent(i)]);
            i=parent(i);
        }
    }
    void Minheapify(int i){
        int lt=left(i);
        int rt=right(i);
        int smallest=i;
        if(lt<size && arr[lt]<arr[i]){
            smallest=lt;
        }
        if(rt<size && arr[rt]<arr[smallest]){
            smallest=rt;
        }
        if(smallest != i){
            swap(arr[i],arr[smallest]);
            Minheapify(smallest);
        }
    }
    int extractMin(){
        if(size==0){
            return INT_MAX;
        }
        if(size ==1){
            size--;
            return arr[0];
        }
        swap(arr[0],arr[size-1]);
        size--;
        Minheapify(0);
        return arr[size];
    }
    void decreaseKey(int i,int x){
        arr[i]=x;
        while(i !=0 && arr[parent(i)]>arr[i]){
            swap(arr[parent(i)],arr[i]);
            i=parent(i);
        }
    }
    void deleteKey(int i){
        decreaseKey(i,INT_MIN);
        extractMin();
    }
    int main() 
{ 
    MinHeap h(11);
    h.insert(3); 
    h.insert(2);
    h.deleteKey(0);
    h.insert(15);
    h.insert(20);
    cout << h.extractMin() << endl;
    h.decreaseKey(2, 1);
    cout << h.extractMin() << endl;
    return 0;
} 
};