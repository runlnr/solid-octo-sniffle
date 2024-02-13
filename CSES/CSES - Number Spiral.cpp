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
void solve(ll a, ll b) {
    ll val = max(a, b);
    ll maxn = val*val;
    ll ans = 0, minn = (val-1)*(val-1)+1;
    if(max(a, b) == a) {
        if(a%2 == 0) ans = maxn-b+1;
        else ans = minn+b-1;
    }
    else if(max(a, b) == b) {
        if(b%2 == 1) ans = maxn-a+1;
        else ans = minn+a-1;
    }
    cout << ans;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    ll t;  cin >> t;
    while(t--) {
        ll a, b;   cin >> a >> b;
        solve(a, b);
        cout << endl;
    }
}
