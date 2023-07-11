/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        
        vector<int> ans;
        
        queue<TreeNode* > qu;
        qu.push(root);
        unordered_map<int, TreeNode*> umap;
        
        while( !qu.empty() ) {
            
            int size = qu.size();
            
            for(int i=0;i<size;i++) {
                
                auto top = qu.front();
                qu.pop();
                
                if( top -> left ) {
                    qu.push(top -> left);
                    umap[top->left->val] = top;                    
                }
                
                if( top -> right ) {
                    qu.push(top -> right);
                    umap[top->right->val] = top;                    
                }
            }
        }
        
        unordered_map<int, int> umap2;
        
        qu.push(target);
        while(k-- && !qu.empty()) {
            int size = qu.size();
            
                for(int i=0;i<size;++i) {
                    auto top = qu.front();
                    qu.pop();

                    umap2[top -> val] = 1;

                    if(top -> left && !umap2[top -> left -> val]) {
                        qu.push(top -> left);
                    }

                    if(top -> right && !umap2[top -> right -> val]) {
                        qu.push(top -> right);
                    }

                    if(umap[top -> val] && !umap2[umap[top -> val] -> val]) {
                        qu.push(umap[top -> val]);
                    }
                }
            }
        
        while(!qu.empty()) {
                ans.push_back(qu.front() -> val);
                qu.pop();            
        }
        return ans;
        
        
    }
};