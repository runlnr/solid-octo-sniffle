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
void solve(ll n) {
    vector<pair<ll, ll>> vc;
    vector<ll> temp;
    ll m, ans = 0, p, minn = INT_MAX;
    for(ll i = 0; i < n; i++) {
        cin >> m;
        for(ll i = 0; i < m; i++) {
            cin >> p;
            temp.pback(p);
        }
        sort(temp.begin(), temp.end());
        vc.pback({temp[1], temp[0]});
        temp.clear();
    }
    sort(vc.begin(), vc.end());
    for(ll i = vc.size()-1; i > 0; i--) {
        minn = min(minn, vc[i].ss);
        ans += vc[i].ff;
    }
    ans += min(minn, vc[0].ss);
    cout << ans << endl;
    vc.clear();
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    ll t;  cin >> t;
    while(t--) {
        ll n;  cin >> n;
        solve(n);
    }
    return 0;
}
