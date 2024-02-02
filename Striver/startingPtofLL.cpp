#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};
void insertNode(node *head,int val){
    node *newnode=new node(val);
    if(head==NULL){
        head=newnode;
        return;
    }
    node *temp=head;
    while(temp->next !=NULL)temp=temp->next;
    temp->next=newnode;
    return ;
}
node* detectcycle(node* head){
    if(head== NULL ||head->next==NULL)return head;
    node* fast=head;
    node* slow=head;
    node* entry=head;
    while(fast->next && fast->next->next){
        fast=fast->next->next;
        slow=slow->next;
    if(slow ==fast){
        while(slow !=entry){
            slow=slow->next;
            entry=entry->next;

        }
        return slow;
    }
    }
    return NULL;
}