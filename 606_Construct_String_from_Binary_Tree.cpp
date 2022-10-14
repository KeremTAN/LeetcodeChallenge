class Solution {
public:
     void search(const TreeNode* root, string& ret) {
        if (!root) return;   
        ret += to_string(root->val);
        if (root->left) {
            ret += '(';
            search(root->left, ret);
            ret += ')';
        }
        if (root->right) {
            if (!root->left) ret += "()";
            ret += '(';
            search(root->right, ret);
            ret += ')';
        }
    }
    string tree2str(TreeNode* root) {
        string ret;
        search(root, ret);
        return ret;
    }  
};