class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        
        bool left = (root->left == nullptr || (root->val == root->left->val && isUnivalTree(root->left)));
        bool right = (root->right == nullptr || (root->val == root->right->val && isUnivalTree(root->right)));
        
        return left && right;
    }
};