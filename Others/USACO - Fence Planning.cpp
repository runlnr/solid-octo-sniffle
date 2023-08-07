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
bool vis[N];
int idx = 0;
vector<int> vc[N], roads[N];
vector<pair<int, int>> pos;
void dfs(int parent) {
    if(vis[parent]) return;
    vis[parent] = true;

    for(auto child : vc[parent])
        if(!vis[child]) {
            dfs(child);
            roads[idx].pback(child);
        }
}
void solve(int n, int k) {
    int a, b;

    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        pos.pback({a, b});
    }
    for(int i = 0; i < k; i++) {
        cin >> a >> b;
        a--;    b--;
        vc[a].pback(b);     vc[b].pback(a);
    }

    for(int i = 0; i < n; i++) {
        if(!vis[i]) {
            roads[idx].pback(i);
            dfs(i); idx++;
        }
    }

    int ans = INT_MAX;
    for(int i = 0; i < idx; i++) {
        int max_w = 0, min_w = INT_MAX, max_h = 0, min_h = INT_MAX;
        for(auto j : roads[i]) {
            max_w = max(max_w, pos[j].ff);
            max_h = max(max_h, pos[j].ss);
            min_w = min(min_w, pos[j].ff);
            min_h = min(min_h, pos[j].ss);
        }
        int width = max_w-min_w, height = max_h-min_h;
        ans = min(ans, (width+height)*2);
    }
    cout << ans << endl;
}
int main() {
    freopen("fenceplan.in", "r", stdin);
    freopen("fenceplan.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n, k;   cin >> n >> k;
    solve(n, k);
    return 0;
}
