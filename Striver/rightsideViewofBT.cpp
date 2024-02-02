#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int x){
        data=x;
        left=right=NULL;
    }
};
class Solution{
    vector<int>rightsideView(Node *root){
        vector<int>res;
        recursion(root,0,res);
        return res;
    }
    void recursion(Node *root,int level,vector<int>&res){
        if(res.size() == level){
            res.push_back(root->data);
        }
        recursion(root->right,level+1,res);
        recursion(root->left,level+1,res);
    }
};