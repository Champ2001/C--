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
    vector<int>prePostINtraversal(Node *root){
        stack<pair<Node*,int>>st;
        vector<int>pre,post,in;
        st.push({root,1});
        if(root ==NULL){
            return;
        }
        while(!st.empty()){
            auto it=st.top();
            st.pop();
            if(it.second == 1){
                pre.push_back(it.first->data);
                it.second++;
                st.push(it);
                if(it.first->left !=NULL){
                    st.push({it.first->left,1});
                }
            }
            else if(it.second == 2){
                in.push_back(it.first->data);
                it.second++;
                st.push(it);
                if(it.first->right != NULL){
                    st.push({it.first->right,1});
                }
            }
            else{
                post.push_back(it.first->data);
            }
        }
    }
};