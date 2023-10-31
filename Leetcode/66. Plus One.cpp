class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size()-1;
        bool flag = 1;

        for(int i = size; i >= 0; i--) {
            if(flag) {
                digits[i] += 1;     flag = false;
            }
            if(digits[i] == 10) {
                digits[i] = 0;      flag = true;
            }
        }

        if(digits[0] == 0) digits.insert(digits.begin(), 1);
        return digits;
    }
};
