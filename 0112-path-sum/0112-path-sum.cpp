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
    bool hasPathSum(TreeNode* root, int targetSum) {

        int sum=0;
        return solve(root,targetSum,sum);
    }

    bool solve(TreeNode* root, int targetSum,int &sum){
               if(root==NULL){
            return false;
        }

        sum+=root->val;
        
        if(sum==targetSum && root->left==NULL && root->right==NULL){
            return true;
        }
        bool r=solve(root->left,targetSum,sum);
        bool l=solve(root->right,targetSum,sum);

        sum-=root->val;

        return r||l;
        
    }
};