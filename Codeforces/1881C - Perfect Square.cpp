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
char ar[1010][1010];
void solve(ll n) {
    ll ans = 0;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) cin >> ar[i][j];

    ll e = n-1, st = 0;
    while(e - st >= 0) {
        for(ll i = st; i <= e; i++) {
            ll temp = max(max(max(ar[st][i], ar[n-1-i][st]), ar[e][n-1-i]), ar[i][n-st-1]);

            ans += abs(ar[st][i] - temp);
            ar[st][i] = temp;

            ans += abs(ar[n-i-1][st] - temp);
            ar[n-1-i][st] = temp;

            ans += abs(ar[e][n-i-1] - temp);
            ar[e][n-i-1] = temp;

            ans += abs(ar[i][n-st-1] - temp);
            ar[i][n-st-1] = temp;

        }
        st++;    e--;
    }
    cout << ans << endl;
    memset(ar, 0, sizeof(ar));
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    ll t, n;    cin >> t;
    while(t--) {
        cin >> n;
        solve(n);
    }
}
