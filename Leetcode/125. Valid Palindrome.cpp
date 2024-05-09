class Solution {
public:
    bool isPalindrome(string s) {
        string late;
        char temp;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] >= 97 && s[i] <= 122) late += s[i];
            else if(s[i]+32 >= 97 && s[i]+32 <= 122)
                late += (s[i]+32);
            else if(s[i] >= 48 && s[i] <= 57) late += s[i];
        }
        int sz = late.size();
        bool flag = true;
        for(int i = 0; i < (sz+1)/2; i++) {
            if(late[i] != late[sz-i-1]) {flag = 0;  break;}
        }
        return flag;
    }
};
