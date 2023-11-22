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
ll n, k, ans = 0;
vector<int> link[100010];
vector<pair<int, int>> vc;
bool vis[100010] = {0};
int a, b, p;

void dfs(int parent) {
    if(vis[parent]) return;

    vis[parent] = true;
    for(auto child : link[parent])
        dfs(child);
}
void solve(ll n, ll k) {
    vc.resize(n);
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        cin >> p;
        vc[i] = {p, i};
    }

    for(int i = 0; i < k; i++) {
        cin >> a >> b;
        link[a-1].pback(b-1);
        link[b-1].pback(a-1);
    }
    sort(vc.begin(), vc.end());

    for(int i = 0; i < n; i++) {
        if(!vis[vc[i].ss]) {
            ans += vc[i].ff;
            dfs(vc[i].ss);
        }
        else continue;
    }

    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    ll n, k;    cin >> n >> k;
    solve(n, k);
    return 0;
}
