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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
        unordered_map<int, int> inorderMap;
        for (int i = 0; i < n; i++) {
            inorderMap[inorder[i]] = i;
        }
        return buildTreeHelper(inorder, 0, n - 1, postorder, 0, n - 1, inorderMap);
    }
    
    TreeNode* buildTreeHelper(vector<int>& inorder, int inStart, int inEnd, vector<int>& postorder, int postStart, int postEnd, unordered_map<int, int>& inorderMap) {
        if (inStart > inEnd) {
            return NULL;
        }
        TreeNode* root = new TreeNode(postorder[postEnd]);
        int inIndex = inorderMap[root->val];
        int leftSubtreeSize = inIndex - inStart;
        root->left = buildTreeHelper(inorder, inStart, inIndex - 1, postorder, postStart, postStart + leftSubtreeSize - 1, inorderMap);
        root->right = buildTreeHelper(inorder, inIndex + 1, inEnd, postorder, postStart + leftSubtreeSize, postEnd - 1, inorderMap);
        return root;
    }
};
