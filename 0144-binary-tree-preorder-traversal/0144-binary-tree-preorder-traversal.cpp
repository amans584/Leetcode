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
    void preorderfun(vector<int>& preorder,TreeNode* root){
         if(root == NULL){return;}
        preorder.push_back(root->val);
        preorderfun(preorder,root->left);
        preorderfun(preorder,root->right);
     }

    vector<int> preorderTraversal(TreeNode* root) {
         vector<int>preorder;
        preorderfun(preorder,root);
         return preorder;
}

    
};