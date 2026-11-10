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
    TreeNode* bstToGst(TreeNode* root) {
        int sum=0;
        sumlelo(sum,root);
        answerlelo(sum,root);
        return root;
    }

    void sumlelo(int &sum,TreeNode* root){
        if(root==NULL){
            return;
        }
        sum+=root->val; 
        sumlelo(sum,root->left);
        sumlelo(sum,root->right);
    }

    void answerlelo(int &sum,TreeNode* root){
        if(root==NULL){
            return;
        }
        answerlelo(sum,root->left);
        if(root->val==0){
            root->val=sum;
        }else if(root->val==1){
            root->val=sum;
            sum-=1;
        }else{
            int temp=root->val;
            root->val=sum;
            sum=sum-temp;
        }
        answerlelo(sum,root->right);
    }




};