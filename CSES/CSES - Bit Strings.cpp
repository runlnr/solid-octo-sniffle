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
ll ltnp(ll a, ll b) {
    if(b == 0) return 1;
    ll x = ltnp(a, b/2) % MOD;
    if(b%2 == 0) return (x*x) % MOD;
    else if(b%2 == 1) return (x*x*a) % MOD;
}
void solve(ll n) {
    ll ans = 2;
    cout << ltnp(2, n);
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    ll n;  cin >> n;
    solve(n);
}
