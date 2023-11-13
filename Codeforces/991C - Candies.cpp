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
bool calc(ll n, ll minimal, ll targ) {
    ll ans = 0, temp = 0;
    while(n > 0) {
        if(n > minimal) {
            n -= minimal;   ans += minimal;
        }
        else if(n <= minimal) {
            ans += n;   n -= n;
        }

        if(n > 0) {
            temp = n/10;
            n -= temp;
        }
    }

    if(ans >= targ) return 1;
    return 0;
}
ll bsr(ll n) {
    ll targ = n/2;
    if(n%2 == 1) targ++;

    ll l = 1, r = n+1, ans = n+1;
    while(l <= r) {
        ll mid = l+(r-l)/2;

        if(calc(n, mid, targ)) {
            r = mid-1;  ans = mid;
        }
        else l = mid+1;


    }
    return ans;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    ll n;   cin >> n;
    cout << bsr(n);
    return 0;
}
