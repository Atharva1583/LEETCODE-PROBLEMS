class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1){
            return true;
        }
        int start=1;
        int end=num/2;
        while(start<=end){
            long long mid=(start+end)/2;
            if(mid*mid==num){
                return true;
            }else if(mid*mid<num){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        return false;
    }
};
