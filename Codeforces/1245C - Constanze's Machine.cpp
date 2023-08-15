#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back

using namespace std;
typedef long long ll;   typedef string str;
const int MOD = 1e9+7, N = 1e5+7, J = 1e3+7;
//chetmeorroiroiorr
ll dp[N];
void solve(str s) {
    dp[0] = dp[1] = 1;
    bool flag = 1;

    for(int i = 2; flag && i < s.size()+1; i++) {
        if(s[i-1] == s[i-2]) {
            if(s[i-1] == 'n' || s[i-1] == 'u') {
                dp[i] = dp[i-1]+dp[i-2];
                dp[i] %= MOD;
            }
            else dp[i] = dp[i-1];
        }
        else dp[i] = dp[i-1];

        if(s[i-2] == 'm' || s[i-2] == 'w') {flag = 0;   break;}
    }
    if(s[s.size()-1] == 'm' || s[s.size()-1] == 'w') flag = 0;
    if(flag) cout << dp[s.size()];
    else cout << 0;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    str s;  cin >> s;
    solve(s);
    return 0;
}
