class Solution {
public:
    int hIndex(vector<int>& citations) {
        //first binary search loop
        int low = 0, sz = citations.size()-1;
        int ans = -1, pos = -1, mark = sz, high = citations[sz];

        //second binary search loop
        int l = 0, r = sz;

        while(low <= high) {
            int target = low+(high-low)/2;
            l = 0, r = sz, pos = -1;

            while(l <= r) {
                int mid = l+(r-l)/2;
                if(citations[mid] >= target) {
                    r = mid-1;     pos = mid;
                }
                else l = mid+1;
            }
            if(mark-pos+1 >= target && pos != -1) {
                low = target+1;    ans = target;
            }
            else high = target-1;
        }
        return ans;
    }
};
