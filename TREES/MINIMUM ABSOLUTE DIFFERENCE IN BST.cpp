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
    void inorder(TreeNode* root,vector<int> &a){
        if(root==NULL){
            return;
        }
        inorder(root->left,a);
        a.push_back(root->val);
        inorder(root->right,a);
    }
    vector<int> InOrder(TreeNode* root){
        vector<int> a;
        inorder(root,a);
        return a;
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int> a=InOrder(root);
        int min_diff=INT_MAX;
        for(int i=0;i<a.size()-1;i++){
            min_diff=min(min_diff,a[i+1]-a[i]);
        }
        return min_diff;
        
    }
};
