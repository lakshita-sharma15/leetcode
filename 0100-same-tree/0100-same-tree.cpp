
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // Both null
        if (!p && !q) return true;
        
        // One null or values mismatch
        if (!p || !q || p->val != q->val) return false;
        
        // Recurse
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};