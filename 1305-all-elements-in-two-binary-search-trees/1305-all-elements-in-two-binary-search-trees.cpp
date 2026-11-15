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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> ans;
        solve(ans,root1);
        solve(ans,root2);
        sort(ans.begin(),ans.end());
        return ans;
    }

    void solve(vector<int> &ans,TreeNode* root){
        if(root==NULL){
            return;
        }
        ans.push_back(root->val);
        solve(ans,root->left);
        solve(ans,root->right);
    }
};