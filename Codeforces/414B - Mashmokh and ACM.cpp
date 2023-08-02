#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back

using namespace std;
typedef long long ll;   typedef string str;
const ll MOD = 1e9+7, N = 1e5+7, J = (1e3+7)*2;
//chetmeorroiroiorr
ll dp[J][J];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    ll n, k;   cin >> n >> k;
    ll ans = 0, p = 1;

    for(ll p = 1; p <= k; p++) {
        for(ll i = 1; i <= n; i++) {
            if(p == 1) dp[i][p] = 1;
            else {
                ll temp = 0;
                for(ll j = i; j <= n; j += i) {
                    dp[i][p] += dp[j][p-1];
                    dp[i][p] %= MOD;
                }
            }
        }
    }
    for(ll i = 1; i <= n; i++) {
        ans += dp[i][k];
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}

