class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> vc(2);
        vc[0] = vc[1] = 0;
        int l = 0, r = nums.size()-1;
        while(l <= r) {
            int mid = l+(r-l)/2;
            if(nums[mid] > target) r = mid-1;
            else if(nums[mid] <= target) {
                l = mid+1; vc[1] = mid;
            }
        }
        l = 0, r = nums.size()-1; 
        while(l <= r) {
            int mid = l+(r-l)/2;
            if(nums[mid] >= target) {
                r = mid-1;  vc[0] = mid;
            }
            else if(nums[mid] < target) l = mid+1;
        }
        if(nums.size() < 1) vc[0] = vc[1] = -1;
        else if(nums[vc[0]] != target || nums[vc[1]] != target) vc[0] = vc[1] = -1;
        return vc;
    }
};
