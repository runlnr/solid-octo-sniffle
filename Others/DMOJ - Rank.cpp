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
vector<int> vc[J];
bool vis[J], flag = 0;
int ans = 0;
void dfs(int parent, int target) {
    if(vis[parent]) return;
    vis[parent] = true;

    for(auto child : vc[parent]) {
        if(child == target) {flag = 1;   return;}
        else if(!vis[child]) dfs(child, target);
    }
    return;
}
void solve(int n, int k) {
    int a, b, val_a, val_b;
    for(int i = 0; i < k; i++) {
        cin >> a >> b >> val_a >> val_b;
        if(val_a > val_b) vc[a].pback(b);
        else vc[b].pback(a);
    }

    for(int i = 1; i <= n; i++) {
        dfs(i, i);
        if(flag) ans++;
        memset(vis, 0, sizeof(vis));
        flag = 0;
    }
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n, k;   cin >> n >> k;
    solve(n, k);
    return 0;
}
