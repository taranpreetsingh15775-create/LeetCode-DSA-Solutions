class Solution {
public:
    int avg_count = 0;

    void avglelo(int &sum, int &count, TreeNode* root) {
        if (root == NULL) {
            return;
        }
        sum += root->val;
        count++;
        avglelo(sum, count, root->left);
        avglelo(sum, count, root->right);
    }

    void visitEveryNode(TreeNode* root) {
        if (root == NULL) {
            return;
        }

        int sum = 0;
        int count = 0;
        avglelo(sum, count, root);

        if (sum / count == root->val) {
            avg_count++;
        }

        visitEveryNode(root->left);
        visitEveryNode(root->right);
    }

    int averageOfSubtree(TreeNode* root) {
        visitEveryNode(root);
        return avg_count;
    }
};
