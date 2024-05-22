// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 0, r = n-1, ans = n;
        while(l <= r) {
            int mid = l+(r-l)/2;
            if(!isBadVersion(mid)) l = mid+1;
            else if(isBadVersion(mid)) {
                r = mid-1;    ans = mid;
            }
        }
        return ans;
    }
};
