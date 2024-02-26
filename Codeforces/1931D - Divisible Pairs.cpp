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
void solve(int n, int x, int y) {
    map<pair<ll, ll>, ll> mp;

    ll p, ans = 0, req1, req2;
    for(int i = 0; i < n; i++) {
        cin >> p;

        int val1 = p%x, val2 = p%y;
        req1 = (x-val1)%x;
        req2 = val2;
        ans += mp[{req1, req2}];
        mp[{val1, val2}]++;
    }
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t, n, x, y;   cin >> t;
    while(t--) {
        cin >> n >> x >> y;
        solve(n, x, y);
    }
}
