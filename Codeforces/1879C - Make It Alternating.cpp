#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back
#define dst distance

using namespace std;
typedef long long ll;   typedef string str;
typedef unsigned long long ull;

const int MOD = 998244353, N = 1e5+7, J = 1e3+7;
ll calc(int n) {
    ll ans = 1;
    for(int i = 1; i <= n; i++) {
        ans *= i;   ans %= MOD;
    }
    return ans;
}
void solve(str s) {
    ll prev = s[0]-'0', temp, cnt = 1, total = 0, meo = 1, times = 0;
    ll ans = 0;
    for(int i = 1; i < s.size(); i++) {
        temp = s[i] - '0';

        if(temp == prev) cnt++;
        else if(temp != prev) {
            meo %=MOD;
            if(cnt > 1) {meo *= cnt;    times++;}
            meo%=MOD;
            total += cnt-1;
            cnt = 1;   prev = temp;
        }
    }
    if(cnt > 1) {meo *= cnt; meo%=MOD;   times++;}
    total += cnt-1;

    ans = calc(total)*meo % MOD;

    if(total == 0) ans = 1;
    cout << total << sp << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t;  cin >> t;
    str s;
    while(t--) {
        cin >> s;
        solve(s);
    }
}
