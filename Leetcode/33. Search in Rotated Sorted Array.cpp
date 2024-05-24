class Solution {
public:
    int search(vector<int>& nums, int target) {
        int sz = nums.size()-1;
        if(nums[0] <= nums[sz]) {
            int l = 0, r = sz;
            while(l <= r) {
                int mid = l+(r-l)/2;
                if(nums[mid] == target) {return mid;   break;}
                else if(nums[mid] > target) r = mid-1;
                else if(nums[mid] < target) l = mid+1;
            }
        }
        else if(target > nums[sz] && target < nums[0]) return -1;
        else if(nums[0] > nums[sz]) {
            int l = 0, r = sz, pos = sz;
            int mark = nums[sz];
            for(int i = 0; i <= 500; i++) {
                int mid = l+(r-l)/2;
                if(nums[mid] > mark) l = mid+1;
                else if(nums[mid] < mark) {r = mid-1;  pos = mid;}
            }
            if(target <= nums[sz]) {
                l = pos, r = sz;
                while(l <= r) {
                    int mid = l+(r-l)/2;
                    if(nums[mid] == target) {return mid;    break;}
                    else if(nums[mid] < target) l = mid+1;
                    else if(nums[mid] > target) r = mid-1;
                }
            }
            else if(target >= nums[0]) {
                l = 0, r = pos-1;
                while(l <= r) {
                    int mid = l+(r-l)/2;
                    if(nums[mid] == target) {return mid;    break;}
                    else if(nums[mid] < target) l = mid+1;
                    else if(nums[mid] > target) r = mid-1;
                }
            }
        }
        return -1;
    }
};
