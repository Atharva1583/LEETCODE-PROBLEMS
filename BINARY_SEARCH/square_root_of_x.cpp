class Solution {
public:
    int mySqrt(int x) {
        long long n=x;
        int answer=0;
        int start=0;
        int end=n;
        while(start<=end){
            long long mid=(start+end)/2;
            if(mid*mid==n){
                answer=mid;
                break;
            }else if(mid*mid<n){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        if(answer==0){
            answer=min(start,end);
        }
        return answer;
        
    }
};
