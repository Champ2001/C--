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
    public:
    vector<int>bottomView(Node *root){
        vector<int>ans;
        map<int,int>mpp;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            Node *node=it.first;
            int line=it.second;
            mpp[line]=node->data;
            if(node->left !=NULL){
                q.push({node->left,line-1});
            }
            if(node->right !=NULL){
                q.push({node->right,line+1});
            }
        }
        for(auto it:mpp){//auto function accessing the elements of the array naemd map                      
            ans.push_back(it.second);
        }
        return ans;
    }
};