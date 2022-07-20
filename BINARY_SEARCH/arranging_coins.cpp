class Solution {
public:
    int arrangeCoins(int n) {
        int start=1;
        int end=n;
        int ans=0;
        while(start<=end){
            long long mid=(start)+((end-start)/2);
            long long sum=(mid*(mid+1))/2;
            if(sum==n){
                ans=mid;
                break;
            }else if(sum>n){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        if(ans==0){
            ans=min(start,end);
        }
        return ans;
    }
};
