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
Node *middle(Node *head){
    Node *fast=head;
    Node *slow=head;
    while(fast && fast->next){
        fast=fast->next->next;
        slow=slow->next;
        return slow;
    }
}
Node *middle2(Node *head){
    Node *temp=head;
    int n=0;
    while(temp){
        temp=temp->next;
        n++;
    }
    temp=head;
    for(int i=0;i<n/2;i++){
        temp=temp->next;
    }
    return temp;
}