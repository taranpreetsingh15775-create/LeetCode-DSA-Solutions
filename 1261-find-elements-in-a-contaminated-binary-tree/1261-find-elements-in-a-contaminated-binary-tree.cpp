class FindElements {
private:
    TreeNode* treeRoot;

    void recoverTree(TreeNode* node, int val) {
        if (node == nullptr) {
            return;
        }
        node->val = val;
        recoverTree(node->left, 2 * val + 1);
        recoverTree(node->right, 2 * val + 2);
    }

    bool searchTree(TreeNode* node, int target) {
        if (node == nullptr) {
            return false;
        }
        if (node->val == target) {
            return true;
        }
        return searchTree(node->left, target) || searchTree(node->right, target);
    }

public:
    FindElements(TreeNode* root) {
        treeRoot = root;
        recoverTree(treeRoot, 0);
    }
    
    bool find(int target) {
        return searchTree(treeRoot, target);
    }
};
