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
ll n, k;

void bsr() {
    n -= k;
    ll l = 0, r = 2e9, ans = 0;

    while(l <= r) {
        ll mid = l+(r-l)/2;
        ll val = mid*(mid+1)/2;
        if(val >= n) r = mid-1;
        else l = mid+1;
    }
    cout << l+k << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    cin >> n >> k;
    if(n <= k) cout << n;
    else bsr();
    return 0;
}
