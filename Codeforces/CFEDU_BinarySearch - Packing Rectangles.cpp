#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back
#define dst distance

using namespace std;
typedef long long ll;   typedef string str;

const int MOD = 1e9+7, N = 1e5+7, J = 1e3+7;
//chetmeorroiroiorr
ll width, height, n, a;
bool calc(ll x) {
    ll temp = (x/width)*(x/height);
    return temp >= n;
}
ll solve() {
    ll l = 0, r = 1;

    while(!calc(r)) r *= 2;
    while(l < r) {
        ll mid = l+(r-l)/2;
        if(calc(mid)) r = mid;
        else l = mid+1;
    }
    return r;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    cin >> width >> height >> n;
    cout << solve();
    return 0;
}
