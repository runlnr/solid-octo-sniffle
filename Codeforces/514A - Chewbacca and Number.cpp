    #include <bits/stdc++.h>
    #define endl "\n"
    #define sp ' '
    #define ff first
    #define ss second

    using namespace std;
    typedef long long ll;   typedef string str;
    void solve(str s) {
        bool flag0 = 0;     int ans = INT_MAX;
        str trns;
        for(int i = 0; i < s.size(); i++) {
            int temp = s[i] - 48, rmn = 9-temp;
            if(temp == 0) {
                if(i != 0) trns += '0';
                else trns += '9';
            }
            else if(temp == 9) {
                if(i == 0) trns += '9';
                else trns += '0';
            }
            else {
                if(rmn < temp) {
                    char p = rmn+48;
                    trns += p;
                }
                else trns += s[i];
            }
        }
        cout << trns << endl;
    }
    int main() {
        ios_base::sync_with_stdio();
        cin.tie(0);     cout.tie(0);
        str s;  cin >> s;
        solve(s);
        return 0;
    }
