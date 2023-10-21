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

void solve(ll n, ll k) {
    vector<ll> vc(n), pri(k);
    ll ans = 0;

    for(auto &i : vc) cin >> i, i--;
    for(auto &i : pri) cin >> i;
    pri.pback(LLONG_MAX);

    sort(vc.begin(), vc.end(), greater<ll>());

    ll i = 0, j = 0;
    while(i < n && j <= k) {

        if(vc[i] < j) ans += pri[vc[i]];
        else {
            if(pri[j] <= pri[vc[i]]) {
                ans += pri[j];  j++;
            }
            else {
                ans += pri[vc[i]];
            }
        }
        i++;
    }
    cout << ans;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    ll t, n, k;  cin >> t;
    while(t--) {
        cin >> n >> k;
        solve(n, k);
        cout << endl;
    }
}
