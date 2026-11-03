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
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int a=maxDepth(root->left)+maxDepth(root->right);
        return solve(root,a);
        
    }

    int maxDepth(TreeNode* root) {
        if(root == NULL) {
            return 0;
        }

        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);

        return 1 + max(leftDepth, rightDepth);
    }

    int solve(TreeNode* root,int &a){
    if(root==NULL){
        return a;
    }

    solve(root->left,a);
    solve(root->right,a);
    int x=maxDepth(root->left) + maxDepth(root->right);
    if(a<x){
        a=x;
    }

    return a;
    }
};