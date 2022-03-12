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
    TreeNode* Invert(TreeNode* root){
        if(root==NULL){
            return root;
        }
        swap(root->left,root->right);
        root->left=Invert(root->left);
        root->right=Invert(root->right);
        return root;
    }
    TreeNode* invertTree(TreeNode* root) {
        Invert(root);
        return root;
    }
};
