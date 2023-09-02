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
ll n, r, avg, req;
ll ans = 0;
vector<pair<ll, ll>> vc;
bool comp(pair<ll, ll> a, pair<ll, ll> b) {
    if(a.ss == b.ss) return a.ff < b.ff;
    return a.ss < b.ss;
}
void solve() {
    for(int i = 0; i < vc.size(); i++) {
        if(req <= 0) break;
        ll diff = r-vc[i].ff, dec = min(diff, req);

        ans += dec*vc[i].ss;
        req -= dec;
    }
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    cin >> n >> r >> avg;

    ll a, b, sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        vc.pback({a, b});
        sum += a;
    }
    sort(vc.begin(), vc.end(), comp);

    req = avg*n-sum;
    solve();
    return 0;
}
