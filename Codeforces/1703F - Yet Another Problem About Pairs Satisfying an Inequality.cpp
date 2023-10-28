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
bool re(int x, int mid, vector<pair<int, int>> vc) {
    if(vc[mid].ff > vc[x].ss) return 1;
    else return 0;
}
ll bs(int x, int l, int r, vector<pair<int, int>> vc) {
    ll ans = 0;
    while(l <= r) {
        int mid = l+(r-l)/2;
        if(re(x, mid, vc)) {
            r = mid-1;  ans = mid;
        }
        else l = mid+1;
    }
    return ans;
}
void solve(int n) {
    vector<int> a(n+1), vc;

    int p;
    ll ans = 0, start, temp;

    a[0] = -2;
    for(int i = 1; i <= n; i++) cin >> a[i];

    for(int i = 1; i <= n; i++) {
        if(a[i] >= i) continue;
        ans += (long long)(lower_bound(vc.begin(), vc.end(), a[i]) - vc.begin());
        vc.pback(i);
    }

    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t, n, k;  cin >> t;
    while(t--) {
        cin >> n;
        solve(n);
    }
}
