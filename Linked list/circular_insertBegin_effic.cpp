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
Node *insertbegin(Node *head,int x){
    Node *temp=head;
    if(head == NULL){
        temp->next=temp;
        return temp;
    }
    else{
        temp->next=head->next;
        head->next=temp;
        int t=head->data;
        head->data=temp->data;
        temp->data=t;
        return temp;
    }
}
void printlist(Node *head){
    Node *curr=head;
    if(head ==NULL){
        return ;
    }
    do{
        cout<<curr->data<<" ";
        curr=curr->next;
    }while(curr != head);
}
int main(){
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=head;
    head=insertbegin(head,10);
}