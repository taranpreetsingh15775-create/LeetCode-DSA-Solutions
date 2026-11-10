/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void flatten(TreeNode* root) {
        vector<TreeNode*> ans;
        solve(root,ans);
        if(root!=NULL){
            solveforeal(ans);
        }
    }

    void solve(TreeNode* root,vector<TreeNode*> &ans){
        if(root==NULL){
            return;
        }
        ans.push_back(root);
        solve(root->left,ans);
        solve(root->right,ans);
    }

    void solveforeal(vector<TreeNode*> &ans){
        int n=ans.size();
        for(int i=0;i<n-1;i++){
            TreeNode* a=ans[i];
            a->right=ans[i+1];
            a->left=NULL;
        }
    }
};