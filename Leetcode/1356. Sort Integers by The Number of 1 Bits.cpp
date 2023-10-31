class Solution {
public:
    int cntBits(int x) {
        int ans = 0;
        while(x > 0) {
            if(x%2 != 0) ans++;
            x /= 2;
        }
        return ans;
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<int> vc[100], ans;

        for(int i = 0; i < arr.size(); i++) {
            vc[cntBits(arr[i])].push_back(arr[i]);
        }

        for(int i = 0; i <= 20; i++) {
            sort(vc[i].begin(), vc[i].end());
            if(vc[i].size() > 0)
                for(auto j : vc[i]) ans.push_back(j);
        }
        return ans;
    }
};
