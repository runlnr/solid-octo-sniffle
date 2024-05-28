class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int low = 0, high = 0, n = s.size();
        int curCost = 0, curLength = 0, ans = 0;

        while(low < n) {
            if(abs(s[low] - t[low]) > maxCost) low++;
            else {high = low;    break;}
        }

        while(low < n && high < n) {
            curCost += abs(s[high] - t[high]);
            curLength++;    high++;

            if(curCost > maxCost) {
                ans = max(ans, curLength-1);
                while(curCost > maxCost) {
                    curCost -= abs(s[low] - t[low]);    
                    curLength--;    low++;
                }  
            }
        }
        ans = max(curLength, ans);
        return ans;
    }
};
