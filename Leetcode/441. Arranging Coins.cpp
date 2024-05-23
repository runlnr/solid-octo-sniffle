class Solution {
public:
    int arrangeCoins(long long n) {
        long long l = 1, r = n-1, ans = n, temp;
        while(l <= r) {
            long long mid = l+(r-l)/2;
            temp = mid*(mid+1)/2;
            if(temp <= n) {ans = mid;   l = mid+1;}
            else r = mid-1;
        }
        return ans;
    }
};
