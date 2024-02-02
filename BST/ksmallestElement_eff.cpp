#include<bits/stdc++.h>
using namespace std;
struct Node{
    int key ;
    struct Node *left;
    struct Node *right;
    int lcount;
    Node(int k){
        key=k;
        left=right=NULL;
        lcount=0;
    }
};
Node *insert(Node *root,int x){
    if(root ==NULL){
        return new Node(x);
    }
    if(root->key >x){
        root->left=insert(root->left,x);
        root->lcount++;
    }
    else if(root->key <x){
        root->right=insert(root->right,x);
    }
    return root;
}
Node *kSmallestElem(Node *root,int k){
    if(root ==NULL){
        return NULL;
    }
    int count=root->lcount+1;
    if(count ==k){
        return root;
    }
    if(count >k){
        return kSmallestElem(root->left,k);
    }
    return kSmallestElem(root->right,k-count);
}
int main(){
    Node *root=NULL;
    int keys[]={};
    for(int x:keys){
        root=insert(root,x);
    }
    int k=4;
    Node *res=kSmallestElem(root,k);
    if (res == NULL)
        cout << "There are less than k nodes in the BST";
    else
        cout << "K-th Smallest Element is " << res->key;
}