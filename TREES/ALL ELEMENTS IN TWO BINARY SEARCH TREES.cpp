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
    
   void getElements(TreeNode* root,vector<int> &ans){
        //vector<int> ans;
        if(root==NULL){
            return;
        }
        
        ans.push_back(root->val);
        getElements(root->left,ans);
        getElements(root->right,ans);
        
        //return ans;
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> ans;
        getElements(root1,ans);
        getElements(root2,ans);
        sort(ans.begin(),ans.end());
        
        return ans;
    }
};
