
#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back

using namespace std;
typedef long long ll;   typedef string str;
const ll MOD = 1e9+7, N = 1e5+7, J = 1e3+7;
//chetmeorroiroiorr
ll dp[N];
bool comp(pair<int, int> a, pair<int, int> b) {
    return a.ss < b.ss;
}
void solve(ll n) {
    vector<pair<int, int>> vc;

    for(int i = 0; i < n; i++) {
        int a, b;   cin >> a >> b;
        vc.pback({a, b});
    }
    sort(vc.begin(), vc.end(), comp);

    int i = 0, j = n-1, diff = 0, ans = 0;
    while(i < j) {
        diff = min(vc[i].ff, vc[j].ff);
        ans = max(ans, vc[i].ss+vc[j].ss);
        vc[i].ff -= diff;
        vc[j].ff -= diff;
        if(vc[i].ff == 0) i++;
        if(vc[j].ff == 0) j--;
    }
    if(i == j && vc[i].ff >= 2) ans = max(ans, vc[i].ss*2);
    cout << ans << endl;
}
int main() {
    freopen("pairup.in", "r", stdin);
    freopen("pairup.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    ll n;  cin >> n;
    solve(n);
    return 0;
}

