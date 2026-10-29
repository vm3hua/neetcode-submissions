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
    bool issame(TreeNode* leftT, TreeNode* rightT){
        if(leftT == nullptr && rightT == nullptr) return true;
        if(leftT == nullptr || rightT == nullptr) return false;
        if(leftT->val != rightT->val) return false;
        return issame(leftT->left, rightT->left) && issame(leftT->right, rightT->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == nullptr) return false;
        //todo
        return issame(root, subRoot) || isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};
