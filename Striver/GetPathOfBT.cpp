#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
};
struct Node* newNode(int data){
    struct Node* node=(struct Node*)malloc(sizeof(struct Node));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return (node);
}
bool getPath(Node* root,vector<int>&arr,int x){
    if(!root){
        return false;
    }
    arr.push_back(root->data);
    if(root->data ==  x){
        return true;
    }
    if(getPath(root->left,arr,x)|| getPath(root->right,arr,x)){
        return true;
    }
    arr.pop_back();
    return false;
}
int main() {

  struct Node * root = newNode(1);
  root -> left = newNode(2);
  root -> left -> left = newNode(4);
  root -> left -> right = newNode(5);
  root -> left -> right -> left = newNode(6);
  root -> left -> right -> right = newNode(7);
  root -> right = newNode(3);

  vector < int > arr;

  bool res;
  res = getPath(root, arr, 7);

  cout << "The path is ";
  for (auto it: arr) {
    cout << it << " ";
  }

  return 0;
}