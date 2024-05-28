class Solution {
public:
    int mySqrt(int x) {
        long long l = 0, r = 65536, ans = 65536, temp;
        while(l <= r) {
            long long mid = l+(r-l)/2;
            temp = mid*mid;
            if(temp <= x) {l = mid+1;    ans = mid;}
            else r = mid-1;
        }
        return ans;
    }
};
