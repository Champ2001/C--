#include <bits/stdc++.h>
// Time complexity=O(n)
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
Node *insertBegin(Node *head,int x){
    Node *temp=new Node(x);
    if(head ==NULL){
        temp->next=temp;
        return temp;
    }
    else  
    {
        temp->next=head->next;
        head->next=temp;
        int d=head->data;
        head->data=temp->data;
        temp->data=d;
        return head;
    }
}
void printlist(Node *head){
    Node *curr=head;
    do {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    while(curr !=head);
}
int main(){
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=head;
    head=insertBegin(head,5);
    printlist(head);
}





