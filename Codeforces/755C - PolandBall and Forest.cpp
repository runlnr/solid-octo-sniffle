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
vector<int> vc[N];
bool vis[N];
int ans = 0, p;

void dfs(int parent) {
    vis[parent] = true;

    for(auto child : vc[parent]) {
        if(!vis[child]) dfs(child);
    }
}
void solve(int n) {
    for(int i = 0; i < n; i++) {
        cin >> p;   p--;
        vc[p].pback(i);     vc[i].pback(p);
    }

    for(int i = 0; i < n; i++) {
        if(!vis[i]) dfs(i), ans++;
    }

    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n;  cin >> n;
    solve(n);
    return 0;
}
