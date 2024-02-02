#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int k){
        data=k;
        left=right=NULL;
    }
};
void postorder(Node *root){
    if(root != NULL){
        postorder(root->left);
        cout<<root->data;
        postorder(root->right);
    }
}
int main(){
    Node *root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->right->left=new Node(40);
    root->right->right=new Node(50);
    postorder(root);
}