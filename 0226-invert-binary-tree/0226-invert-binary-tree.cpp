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
    TreeNode* invertTree(TreeNode* root) {
        if (root == NULL) {
            return NULL;
        }
        
        queue<TreeNode*> queue;
        queue.push(root);
        
        while (!queue.empty()) {
            TreeNode* current = queue.front();
            queue.pop();
            
            // Swap the children
            TreeNode* temp = current->left;
            current->left = current->right;
            current->right = temp;
            
            // Push non-null children to the queue
            if (current->left != NULL) {
                queue.push(current->left);
            }
            if (current->right != NULL) {
                queue.push(current->right);
            }
        }
        
        return root;
    }
};