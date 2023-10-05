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
ll lcm(ll a, ll b) {
    return a*b/__gcd(a, b);
}
void solve(ll n) {
    vector<ll> vc;

    ll ans = LLONG_MAX;
    for(ll i = 1; i <= sqrt(n); i++) {
        if(n%i == 0) {
            ll x = i, y = n/i;
            if(lcm(x, y) == n) {
                ans = min(ans, max(x, y));
            }
        }
    }


    cout << n/ans << sp << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    ll n;  cin >> n;
    solve(n);
}
