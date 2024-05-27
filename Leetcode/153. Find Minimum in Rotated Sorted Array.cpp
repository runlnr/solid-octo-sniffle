class Solution {
public:
    int findMin(vector<int>& nums) {
        int l, r, ans;
        int sz = nums.size()-1;
            l = 0, r = sz, ans = sz;
            for(int i = 0; i < 100; i++) {
                int mid = l+(r-l)/2;
                if(r < l) break;
                if(nums[mid] > nums[sz]) l = mid+1;
                else if(nums[mid] < nums[sz]) {r = mid-1; ans = mid;}
            }
            return nums[ans];
    }
};
