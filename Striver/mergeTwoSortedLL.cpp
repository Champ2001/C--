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
Node *merge(Node *l1,Node *l2){
    if(l1== NULL)return l2;
    if(l2 == NULL)return l1;
    if(l1->data > l2 ->data)std::swap(l1,l2);
    Node *res =l1;
    while(l1 !=NULL && l2!=NULL){
        Node *temp=NULL;
        while(l1 !=NULL && l1->data <=l2->data){
            temp=l1;
            l1=l1->next;
        }
        temp->next=l2;
        std::swap(l1,l2);
    }
    return res;
}