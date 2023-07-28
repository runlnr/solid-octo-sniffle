
#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back

using namespace std;
typedef long long ll;   typedef string str;
const ll MOD = 1e9+7, N = 1e5+7, J = 1e3+7;
//chetmeorroiroiorr
ll dp[N];
void solve(ll n, ll m) {
    vector<pair<ll, ll>> vc;

    for(ll i = 0; i < n; i++) {
        ll a, b;   cin >> a >> b;
        vc.pback({a, b});
    }
    sort(vc.begin(), vc.end());

    ll ans = vc[0].ss, sum = vc[0].ss, l = 0, r = 1;
    while(r < n) {
        sum += vc[r].ss;
        while(vc[r].ff - vc[l].ff > m) {
            sum -= vc[l].ss;
            l++;
        }
        ans = max(sum, ans);
        r++;
    }
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    ll n, m;   cin >> n >> m;
    solve(n, m);
    return 0;
}

