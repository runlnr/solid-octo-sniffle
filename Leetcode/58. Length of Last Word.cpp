class Solution {
public:
    int lengthOfLastWord(string s) {
        int last = s.size()-1, total = 0;
        while(s[last] == ' ') last--;
        for(int i = last; i >= 0; i--) {
            if(s[i] != ' ') total++;
            else if(s[i] == ' ') break;
        }
        return total;
    }
};
