#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node *right;
};
vector<vector<int>>VerticalOrder(Node *root){
    map<int,map<int,multiset<int>>>nodes;
    queue<pair<Node*,pair<int,int>>>todo;
    todo.push({root,{0,0}});
    while(!todo.empty()){
        auto p=todo.front();
        todo.pop();
        Node* node=p.first;
        int x=p.second.first;//vertical
        int y=p.second.second;//level
        nodes[x][y].insert(node->data);
        if(node->left){
            todo.push({node->left,{x-1,y+1}});
        }
        if(node->right){
            todo.push({node->right,{x+1,y+1}});
        }
    }
    vector<vector<int>>ans;
    for(auto p:nodes){
        vector<int>col;
        for(auto q:p.second){
            col.insert(col.end(),q.second.begin(),q.second.end());
        }
        ans.push_back(col);
    }
    return ans;
}
struct Node* newNode(int data){
    struct Node* node=(struct Node*)malloc(sizeof(struct Node));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return (node);
}
int main() {

  struct Node * root = newNode(1);
  root -> left = newNode(2);
  root -> left -> left = newNode(4);
  root -> left -> right = newNode(10);
  root -> left -> left -> right = newNode(5);
  root -> left -> left -> right -> right = newNode(6);
  root -> right = newNode(3);
  root -> right -> left = newNode(9);
  root -> right -> right = newNode(10);

  vector < vector < int > > verticalTraversal;
  verticalTraversal = VerticalOrder(root);

  cout << "The Vertical Traversal is : " << endl;
  for (auto vertical: verticalTraversal) {
    for (auto nodeVal: vertical) {
      cout << nodeVal << " ";
    }
    cout << endl;
  }
  return 0;
}
