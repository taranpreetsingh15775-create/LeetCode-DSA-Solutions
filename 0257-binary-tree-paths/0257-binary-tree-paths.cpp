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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> v1;
        string temp="";
        solve(root,v1,temp);
        return v1;
    }

    void solve(TreeNode* root,vector<string> &v1,string temp){
        if(root==NULL){
            
            return;
        }
        if(!temp.empty()){
            temp += "->";
        }
        temp += to_string(root->val);;

        solve(root->left,v1,temp);
        solve(root->right,v1,temp);
        if(root->left == NULL && root->right == NULL)
        v1.push_back(temp);
    }
};