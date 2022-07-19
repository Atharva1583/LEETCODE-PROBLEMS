class Solution {
public:
    int binarySearch(vector<int> nums,int i){
        int ans=-1;
        int start=0;
        int end=nums.size()-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]==i){
                ans=mid;
                break;
            }else if(nums[mid]<i){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        return ans;
    }
    int missingNumber(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        // iterate from i=0 to i<=max(nums)+1 and check if it exists in nums or not
        // maximum missing number will be max(nums)+1 because if all elements are present from 0 to let say n then the next number will be n+1 , we cannot take n+2 because it is smaller than n+1
        // to check use binary search (logn complexity)
        // if it does not exist in nums return it
        for(int i=0;i<=(nums[nums.size()-1]+1);i++){
            if(binarySearch(nums,i)==-1){
                ans=i;
                break;
            }
        }
        
        return ans;
    }
};
