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
    int maxAncestorDiff(TreeNode* root) {
      return maxAncestorDiff(root, root->val, root->val);
  }
 private:
  int maxAncestorDiff(TreeNode* root, int mini, int maxi) {
    if (root == nullptr)
      return 0;
    mini = min(mini, root->val);
    maxi = max(maxi, root->val);
    const int l = maxAncestorDiff(root->left, mini, maxi);
    const int r = maxAncestorDiff(root->right, mini, maxi);
    return max({maxi - mini, l, r});  
    }
};
