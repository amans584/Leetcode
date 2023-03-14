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
    int sumNumbers(TreeNode* root) {
        int sum = 0;
        dfs(root, 0, sum);
        return sum;
    }
    
    void dfs(TreeNode* node, int currNum, int& sum) {
        if (!node) return;
        
        currNum = currNum * 10 + node->val;
        
        if (!node->left && !node->right) {
            sum += currNum;
            return;
        }
        
        dfs(node->left, currNum, sum);
        dfs(node->right, currNum, sum);
    }
};
