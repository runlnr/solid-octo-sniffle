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
    return a/__gcd(a, b)*b;
}
void solve(ll n) {
    ll a, b;   cin >> a >> b;

    ll as = n/a, bs = n/b, cs = n/lcm(a, b), ans1 = 0, ans2 = 0;

    as -= cs;   bs -= cs;
    ll ssa = n-as+1;;
    ans1 = (n+ssa)*(n-ssa+1)/2;
    if(bs > 0) ans2 = (1+bs)*(bs-1+1)/2;

    cout << ans1-ans2 << endl;

}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t;  cin >> t;
    while(t--) {
        ll n;  cin >> n;
        solve(n);
    }
}
