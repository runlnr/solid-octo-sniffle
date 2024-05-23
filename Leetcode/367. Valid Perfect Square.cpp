class Solution {
public:
    bool isPerfectSquare(long long num) {
        long long l = 1, r = 65536, temp;
        bool flag = 0;
        while(l <= r) {
            long long mid = l+(r-l)/2;
            temp = mid*mid;
            if(temp == num) {flag = 1;  break;}
            else if(temp < num) l = mid+1;
            else if(temp > num) r = mid-1;
        }
        return flag == 1 ? true : false;


    }
};
