#include<bits/stdc++.h>
using namespace std;
struct Node{
    int key;
    struct Node *left;
    struct Node *right;
    Node(int k){
        key=k;
        left=right=NULL;
    }
};
Node *insert(Node *root,int x){
    if(root ==NULL){
        return new Node(x);
    }
    else if(root->key <x){
        root->right=insert(root->right,x);
    }
    else if(root->key >x){
        root->left=insert(root->left,x);
    }
    return root;
}
void Inorder(Node *root){
    if(root !=NULL){
        Inorder(root->left);
        cout<<root->key<<" ";
        Inorder(root->right);
    }
}
int main() {
	
	Node *root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(15);
	root->right->left=new Node(12);
	root->right->right=new Node(18);
	int x=20;
	
	root=insert(root,x);
	Inorder(root);
}