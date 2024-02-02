#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};
void insertNode(node *head,int val){
    node *newnode=new node(val);
    if(head==NULL)
    {
        head=newnode;
        return ;
    }
    node *temp=head;
    while(temp->next !=NULL)temp=temp->next;
    temp->next=newnode;
    return ;
}
node *reverse(node *head){
    node* pre=NULL;
    node *next=NULL;
    while (head!=NULL)
    {
        next=head->next;
        head->next=pre;
        pre=head;
        head=next;
    }
    return pre;
}
bool isPalindrome(node *head){
    if(head==NULL ||head->next ==NULL)return true;
    node* fast=head;
    node* slow=head;
    while(fast->next && fast->next->next){
        fast=fast->next->next;
        slow=slow->next;
    }
    slow->next=reverse(slow->next);
    slow=slow->next;
    while(slow !=NULL){
        if(head->data != slow->data)return false;
        slow=slow->next;
        head=head->next;
    }
    return true;
}
int main() {
    node* head = NULL;
    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,3);
    insertNode(head,2);
    insertNode(head,1);
    isPalindrome(head)? cout<<"True" : cout<<"False";
    return 0;
}