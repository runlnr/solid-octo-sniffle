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
ll gcd(ll a, ll b) {
    if(b == 0) return a;
    return gcd(b, a%b);
}
ll lcmm(ll a, ll b) {
    return a*b/gcd(a,b);
}
void solve(ll x, ll y, ll a, ll b) {
    ll lcm = lcmm(x, y);

    if(b%lcm != 0) {
        ll temp = b%lcm;
        b -= temp;
    }
    b /= lcm;
    if(a%lcm != 0) {
        ll temp = lcm - (a%lcm);
        a += temp;
    }
    a /= lcm;
    cout << b-a+1;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    ll x, y, a, b;
    cin >> x >> y >> a >> b;
    solve(x, y, a, b);
    return 0;
}
