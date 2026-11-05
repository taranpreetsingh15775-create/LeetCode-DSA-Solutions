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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> temp;
        int sum=0;
        
        solve(root,targetSum,sum,ans,temp);
        return ans;
    }

    void solve(TreeNode* root, int targetSum,int &sum,vector<vector<int>> &ans,vector<int> &temp){
               if(root==NULL){
            return ;
        }

        sum+=root->val;
        temp.push_back(root->val);
        
        if(sum==targetSum && root->left==NULL && root->right==NULL){
            ans.push_back(temp);
            sum-=root->val;
            temp.pop_back();
            return ;
        }
        solve(root->left,targetSum,sum,ans,temp);
        solve(root->right,targetSum,sum,ans,temp);
        sum-=root->val;
        temp.pop_back();

        return ;
        
    }
};