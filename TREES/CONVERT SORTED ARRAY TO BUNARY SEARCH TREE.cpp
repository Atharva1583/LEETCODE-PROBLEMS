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
    
    TreeNode* convert(vector<int> &nums,int l,int r){
        if(l>r){
            return NULL;
        }
        if(l==r){
            return new TreeNode(nums[l]);
        }
        int mid = (l+(r-l)/2);
        
        TreeNode* head = new TreeNode(nums[mid]);
        
        head->left=convert(nums,l,mid-1);
        head->right=convert(nums,mid+1,r);
        return head;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        
        return convert(nums,0,n-1);
    }
};
