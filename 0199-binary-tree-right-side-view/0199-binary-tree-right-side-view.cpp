 class Solution {
   public:
 vector<int> rightSideView(TreeNode* root) {
    if (!root) return {};
    vector<int> result;
    queue<TreeNode*> q;
     q.push(root);
    while (!q.empty()) {
    int sz = q.size();
    for (int i = 0; i < sz; i++) {
  TreeNode* node = q.front(); q.pop();
 if (i == sz - 1) // last node of this level
 result.push_back(node->val);
  if (node->left) q.push(node->left);
  if (node->right) q.push(node->right);
   }
    }
  return result;
    }
                                                                                                                };