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
Node *getNode
Node *deleteN(Node *head)
{
    head->data=head->next->data;
    head->next=head->next->next;
    return;
}