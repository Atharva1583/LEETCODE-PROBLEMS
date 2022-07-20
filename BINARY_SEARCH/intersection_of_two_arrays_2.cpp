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
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());// sort both the vectors to use binary search
        sort(nums2.begin(),nums2.end());
        int n=nums1.size();
        int m=nums2.size();
        vector<int> ans;
        map<int,int> freq1,freq2;
        for(int i=0;i<n;i++){
            freq1[nums1[i]]++;
        }
        for(int i=0;i<m;i++){
            freq2[nums2[i]]++;
        }
        vector<bool> vis(1000,false);
        for(int i=0;i<n;i++){
            int minimum=min(freq1[nums1[i]],freq2[nums1[i]]);
            if(!vis[nums1[i]]){
                vis[nums1[i]]=true;
                for(int j=0;j<minimum;j++){
                    ans.push_back(nums1[i]);
                    
                }
            }
            
        }
        return ans;
    }
};
