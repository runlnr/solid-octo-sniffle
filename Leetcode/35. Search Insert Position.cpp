class Solution {
public:
    int bs(int target, vector<int> nums) {
        int l = 0, r = nums.size()-1, ans = nums.size();
        while(l <= r) {
            int mid = l+(r-l)/2;
            if(nums[mid] >= target) {
                r = mid-1;     ans = mid;
            }
            else l = mid+1;
        }
        return ans;
    }
    int searchInsert(vector<int>& nums, int target) {
        int ans = bs(target, nums);
        return ans;
    }
};
