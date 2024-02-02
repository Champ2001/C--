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
Node *addtwoNUMbers(Node *l1,Node *l2){
    Node *dummy=new Node();
    Node *temp=dummy;
    int carry=0;
    while(l1 !=NULL ||l2!=NULL || carry){
        int sum=0;
        if(l1 !=NULL){
            sum=sum+l1->data;
            l1=l1->next;
        }
        if(l2 != NULL){
            sum+=l2->data;
            l2=l2->next;
        }
        sum=sum+carry;
        carry=carry/10;
        Node *node=new Node(sum%10);
        temp->next=node;
        temp=temp->next;
    }
    return dummy->next;
}