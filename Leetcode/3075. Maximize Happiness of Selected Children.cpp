class Solution {
public:
    long long maximumHappinessSum(vector<int>& vc, int k) {
        sort(vc.begin(), vc.end(), greater<int>());
        long long ans = 0, tax = 0;
        for(int i = 0; i < vc.size(); i++) {
            if(k == 0) break;
            if(vc[i]-tax <= 0) break;
            else ans += vc[i]-tax;
            k--;    tax++;
        }
        return ans;
    }
};
