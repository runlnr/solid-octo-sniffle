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

vector<ll> vc, sorted;
map<ll, ll> plu, bye;

void solve(ll n, ll m) {
    vc.resize(n);
    ll a, b, total = 0;
    ll ans = 0;

    for(int i = 0; i < n; i++) cin >> vc[i];
    sort(vc.begin(), vc.end());
    for(int i = 0; i < m; i++) {
        cin >> a >> b;
        a--;    b--;
        bye[b]++;   plu[a]++;
    }

    for(int i = 0; i < n; i++) {
        if(i == 0) {
            sorted.pback(plu[i]);
            total = plu[i];
        }
        else {
            total = total-bye[i-1]+plu[i];
            sorted.pback(total);
        }
    }
    sort(sorted.begin(), sorted.end());

    for(int i = 0; i < n; i++)
        ans += vc[i]*sorted[i];
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    ll n, m;   cin >> n >> m;
    solve(n, m);
    return 0;
}
