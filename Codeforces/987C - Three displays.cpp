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
void solve(int n) {
    ll ans = LLONG_MAX;
    int x, y, z, fixed;

    vector<int> pos(n), cost(n);
    for(int i = 0; i < n; i++) cin >> pos[i];
    for(int i = 0; i < n; i++) cin >> cost[i];

    for(int j = 1; j < n-1; j++) {
        y = cost[j];
        x = z = fixed = INT_MAX;
        for(int i = j-1; i >= 0; i--)
            if(pos[i] < pos[j]) x = min(cost[i], x);
        if(x == fixed) continue;
        for(int i = j+1; i < n; i++)
            if(pos[i] > pos[j]) z = min(cost[i], z);
        if(z == fixed) continue;
        ans = min(x+y+z*1ll, ans);
    }
    if(ans != LLONG_MAX) cout << ans;
    else cout << -1;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n;  cin >> n;
    solve(n);
    return 0;
}
