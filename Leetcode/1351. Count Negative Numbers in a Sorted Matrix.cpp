class Solution {
public:
    int cntneg(vector<int> vc, int target) {
        int l = 0, r = vc.size()-1;
        while(l <= r) {
            int mid = l+(r-l)/2;
            if(vc[mid] >= target) r = mid-1;
            else if(vc[mid] < target) l = mid+1;
        }
        return r+1;
    }
    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0;
        for(int i = 0; i < grid.size(); i++) {
            sort(grid[i].begin(), grid[i].end());
            ans += cntneg(grid[i], 0);
        }
        return ans;
    }
};
