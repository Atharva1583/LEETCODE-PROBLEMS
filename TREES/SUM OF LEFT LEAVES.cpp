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
    bool isLeaf(TreeNode *node)
    {
       if (node == NULL)
           return false;
       if (node->left == NULL && node->right == NULL)
           return true;
       return false;
    }
    int sum(TreeNode* root){
        int ans=0;
        if(root!=NULL){
            if(isLeaf(root->left)){
                ans+=root->left->val;
            }else{
                ans+=sum(root->left);
            }
            
            ans+=sum(root->right);
        }
        return ans;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int ans=sum(root);
        return ans;
    }
};
