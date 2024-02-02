#include<bits/stdc++.h>
using namespace std;
struct Deque{
    int size,cap;
    int *arr;
    Deque(int c){
        cap=c;
        size=0;
        arr=new int[cap];
    }
bool isFull(){
    return(cap==size);
}
bool isEmpty(){
    return (size==0);
}
void insertrear(int x){
    if(isFull()){
        return;
    }
    arr[size]=x;
    size++;
}
void insertfront(int x){
    if(isFull()){
        return;
    }
    for(int i=size-1;i>=0;i--){
        arr[i+1]=arr[i];
        arr[0]=x;
        size++;
    }
}
void deletefront(){
    if(isEmpty()){
        return;
    }
    for(int i=0;i<=size-1;i++){
        arr[i]=arr[i+1];
        size--;
    }
}
int getfront(){
    if(isEmpty()){
        return;
    }
    return arr[0];
}
int getrear(){
    if(isEmpty()){
        return;
    }
    return arr[size-1];
}
};