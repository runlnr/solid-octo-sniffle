class Solution {
public:
    int countTriplets(vector<int>& arr) {
        long long preDone[arr.size()];

        for(int i = 0; i < arr.size(); i++) {
            if(i == 0) preDone[i] = arr[i];
            else {
                preDone[i] = preDone[i-1]^arr[i];
            }
        }
        long long a, b, ans = 0;
        for(int i = 0; i < arr.size(); i++) {
            for(int j = i+1; j < arr.size(); j++) {
                for(int k = j; k < arr.size(); k++) {

                    if(i > 0) a = preDone[j-1]^preDone[i-1];
                    else if(i == 0) a = preDone[j-1];

                    b = preDone[k]^preDone[j-1];
                    if(a == b) ans++;
                }
            }
        }
        return ans;
    }
};
