class Solution {
public:
    int binsr(int x, int n, vector<int> vc) {
        int l = 0, r = n-1, ans = -1;
        while(l <= r) {
            int mid = l+(r-l)/2;
            if(vc[mid] > x) r = mid-1;
            else if(vc[mid] < x) l = mid+1;
            else if(vc[mid] == x) return mid;
        }
        return ans;
    }
    int search(vector<int>& nums, int target) {
        int pos = binsr(target, nums.size(), nums);
        return pos;
    }
};
