#include<bits/stdc++.h>
using namespace std;
struct node {
  int data;
  struct node * left, * right;
};
struct node * newNode(int data) {
  struct node * node = (struct node * ) malloc(sizeof(struct node));
  node -> data = data;
  node -> left = NULL;
  node -> right = NULL;
  return (node);
}
int maxWidth(node* root){
    if(!root){
        return 0;
    }
    int ans=0;
    queue<pair<node*,int>>q;
    q.push({root,0});
    while(!q.empty()){
        int size=q.size();
        
        int mmin=q.front().second;
        int first,last;
        for(int i=0;i<size;i++){
            node * node=q.front().first;
            int curid=q.front().second-mmin;
            q.pop();
            if(i == 0)first=curid;
            if(i == size-1)last=curid;
            if(node->left){
                q.push({node->left,curid*2+1});
            }
            if(node->right){
                q.push({node->right,curid*2+2});
            }
        }
        ans=max(ans,last-first+1);
    }
    return ans;
}
int main() {

  struct node * root = newNode(1);
  root -> left = newNode(3);
  root -> left -> left = newNode(5);
  root -> left -> left -> left = newNode(7);
  root -> right = newNode(2);
  root -> right -> right = newNode(4);
  root -> right -> right -> right = newNode(6);

  int maxwidth = maxWidth(root);
  cout << "The maximum width of the Binary Tree is " << maxWidth;

  return 0;
}