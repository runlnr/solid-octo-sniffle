class Solution {
public:
    string addBinary(string a, string b) {
        if(b.size() < a.size()) 
            while(b.size() < a.size()) b = '0'+b;
        if(a.size() < b.size()) 
            while(a.size() < b.size()) a = '0'+a;

        string s;
        bool flag = false;
        for(int i = a.size()-1; i >= 0; i--) {
            if(a[i] == '1' && b[i] == '1') {
                if(flag) s = '1'+s;
                else if(!flag) s = '0'+s;
                flag = true;
            }
            else if(a[i] == '1' || b[i] == '1') {
                if(flag) s = '0'+s;
                else s = '1'+s;
            }
            else if(flag) {
                s = '1'+s;  flag = false;
            }
            else s = '0'+s;
        }
        if(flag) s = '1'+s;
        return s;
    }
};
