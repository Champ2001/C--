#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
Node *remove(Node head,int n){
    Node *start=new Node();
    start->next=head;
    Node *fast=start;
    Node *slow =start;
    for(int i=1;i<n;i++){
        fast=fast->next;
    }
    while(fast->next !=NULL){
        fast=fast->next;
        slow=slow ->next;
    }
    slow->next=slow->next->next;
    return start->next;
}