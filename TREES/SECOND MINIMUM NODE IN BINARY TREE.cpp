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
    int findSecondMinimumValue(TreeNode* root) {
        vector<int> a;inorder(root,a);
        set<int> s;
        for(int i=0;i<a.size();i++){
            s.insert(a[i]);
        }
        if(s.size()==1){
            return -1;
        }
        set<int> :: iterator it;
        vector<int> ans;
        for(it=s.begin();it!=s.end();it++){
            ans.push_back(*it);
        }
        return ans[1];
    }
};
