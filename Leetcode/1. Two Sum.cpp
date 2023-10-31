class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vc;

        int size = nums.size();
        bool flag = 1;

        for(int i = 0; i < size && flag; i++) {
            for(int j = i+1; j < size && flag; j++) {
                if(nums[i] + nums[j] == target) {
                    vc.push_back(i);
                    vc.push_back(j);
                    flag = 0;   break;
                }
            }
        }

        return vc;
    }
};
