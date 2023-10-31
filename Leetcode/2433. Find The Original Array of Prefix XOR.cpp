class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int temp = pref[0];
        for(int i = 1; i < pref.size(); i++) {
            int p = pref[i-1]^pref[i];
            pref[i-1] = temp;
            temp = p;
        }
        pref[pref.size()-1] = temp;
        return pref;
    }
};
