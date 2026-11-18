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
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        vector<TreeNode*> ans;
        if(root == NULL) {
            return root;
        }
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()) {

            int size = q.size();

            vector<TreeNode*> level;

            for(int i = 0; i < size; i++) {

                TreeNode* node = q.front();
                q.pop();

                level.push_back(node);

                if(node->left!=NULL){
                    q.push(node->left);
                }
                if(node->right!=NULL){
                    q.push(node->right);
                }
            }ans = level;
        }
        if(ans.size()==1){
            return ans[0];
        }
        int x=ans.size();
        return lowestCommonAncestor(root,ans[0],ans[x-1]);
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == p || root == q || root ==NULL)return root;

        TreeNode* left = lowestCommonAncestor(root->left , p , q);
        TreeNode* right = lowestCommonAncestor(root->right , p , q);

        if(left && right)return root;
        if(left)return left;
        return right;

    }
};