#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
Node *insertAtpos(Node *head,int pos,int data){
    Node *temp=new Node(data);
    if(pos ==1){
        temp->next=head;
    }
    Node *curr=head;
    for(int i=1;i<=pos-2 && curr!= NULL;i++){
        curr= curr->next;
    }
    if(curr==NULL){
        return head;
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;
}