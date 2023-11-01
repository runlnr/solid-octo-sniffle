class Solution {
public:
    int reverse(int x) {
        long long rev;
        stringstream ss;     string org;
        ss << x;  ss >> org;
        
        ::reverse(org.begin(), org.end());
        ss.clear();
        ss << org;  ss >> rev;

        if(x < 0) rev *= -1;
        if(rev <= INT_MAX && rev >= INT_MIN) 
            return rev;
        return 0;
    }
};
