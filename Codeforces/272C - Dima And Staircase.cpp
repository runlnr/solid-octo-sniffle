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
    vector<ll> vc(n);
    ll m, w, h, ans = 0;

    for(ll i = 0; i < n; i++) cin >> vc[i];
    cin >> m;
    for(ll i = 0; i < m; i++) {
        cin >> w >> h;
        cout << max(ans, vc[w-1]) << endl;
        ans = max(ans, vc[w-1]) + h;

    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    ll n;  cin >> n;
    solve(n);
    return 0;
}

