
class Solution {
public:
    int diameter = 0;
    int maxDepth(TreeNode* root){
        if(root == nullptr) return 0;
        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);
        diameter = max(diameter, leftDepth + rightDepth);
        return 1 + max(leftDepth, rightDepth);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        maxDepth(root);
        return diameter;
    }
};