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

const int MOD = 1e9+7, N = 1e5+7, J = 1e3+7;
int dp[1000005];
void solve(ll n, ll k) {
    vector<int> vc(n);

    for(auto &i : vc) cin >> i;
    sort(vc.begin(), vc.end());

    dp[0] = 1;
    for(int i = 1; i <= k; i++) {
        for(auto j : vc) if(i-j >= 0) {
            dp[i] += dp[i-j];
            dp[i] %= MOD;
        }
    }
    cout << dp[k];
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    ll n, k;    cin >> n >> k;
    solve(n, k);
}
