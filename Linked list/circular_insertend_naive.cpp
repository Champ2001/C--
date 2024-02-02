#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
Node *insertEnd(Node *head,int x){
    Node *temp=new Node(x);
    if(head ==NULL){
        temp->next=temp;
        return temp;
    }
    else{
        Node *curr=head;
        while(curr->next !=head){//Time complexity is O(n) as we are traversing the whole linked list
            curr=curr->next;
        }
        curr->next=temp;    
        temp->next=head;
        return head;
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
    head=insertEnd(head,40);
    printlist(head);
}