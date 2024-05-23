class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        arr.insert(arr.begin(), 0);
        int l = 0, r = arr.size()-1, ans = arr.size()-1, temp;
        long long final = 0;
        while(l <= r) {
            int mid = l+(r-l)/2;
            temp = arr[mid]-mid;
            if(temp < k) l = mid+1;
            else r = mid-1;
        }
        if(l > r) ans = r;
        else ans = l;
        final = arr[ans]+(k-(arr[ans]-ans));
        return final;
    }
};
