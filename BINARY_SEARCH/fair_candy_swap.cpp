class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        vector<int> ans;
        int sum1=accumulate(aliceSizes.begin(),aliceSizes.end(),0);
        int sum2=accumulate(bobSizes.begin(),bobSizes.end(),0);
        map<int,int> mp;
        for(int y:bobSizes){
            mp[y]++;
        }
        for(int x:aliceSizes){
            int f=x+((sum2-sum1)/2);
            if(mp.find(f)!=mp.end()){
                ans.push_back(x);
                ans.push_back(f);
                return ans;
            }
        }
        return ans;
    }
};
