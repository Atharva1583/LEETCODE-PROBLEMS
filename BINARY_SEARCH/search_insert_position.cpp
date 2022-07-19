class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0;
        int n=nums.size();
        int end=n-1;
        int ans=-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]==target){
                ans=mid;
                break;
            }else if(nums[mid]<target){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        if(ans==-1){
            ans=min(start,end)+1;
        }
        return ans;
    }
};
