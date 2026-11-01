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
    bool isSymmetric(TreeNode* root) {
        if(root==NULL){
            return false;
        }

        return isSameTree(root->left,root->right);

        // TreeNode* p=root->left;
        // TreeNode* q=root->right;

        // if(p==NULL && q==NULL){
        //     return true;
        // }

        // if(p==NULL||q==NULL){
        //     return false;
        // }

        // if(p->val!=q->val){
        //     return false;
        // }else{
        //     return isSameTree(p,q);
        // }
    }

    bool isSameTree(TreeNode* p,TreeNode * q){
        if(p==NULL && q==NULL){
            return true;
        }

        if(p==NULL || q==NULL){
            return false;
        }

        if(p->val!=q->val){
            return false;
        }

        return isSameTree(p->left,q->right) && isSameTree(p->right,q->left);
    }
};