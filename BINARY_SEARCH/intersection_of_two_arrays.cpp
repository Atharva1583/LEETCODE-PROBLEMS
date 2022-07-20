class Solution {
public:
    bool isPresent(vector<int> a,int n){
        int start=0;
        int end=a.size()-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(a[mid]==n){
                return true;
            }else if(a[mid]<n){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        return false;
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());// sort both the vectors to use binary search
        sort(nums2.begin(),nums2.end());
        int n=nums1.size();
        int m=nums2.size();
        vector<int> ans;
        vector<bool> visited(1000,false);// make visited array to check the element is present in array or not
        if(n>m){
            for(int i=0;i<m;i++){
                if(isPresent(nums1,nums2[i]) && !visited[nums2[i]]){
                    // if the element is present in another vector and we have not included it in the ans vector insert it in ans vector
                    ans.push_back(nums2[i]);
                    visited[nums2[i]]=true;
                }
            }
        }else{
            for(int i=0;i<n;i++){
                if(isPresent(nums2,nums1[i]) && !visited[nums1[i]]){
                    ans.push_back(nums1[i]);
                    visited[nums1[i]]=true;
                }
            }
        }
        return ans;
    }
};
