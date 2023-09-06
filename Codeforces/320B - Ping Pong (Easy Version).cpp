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
vector<int> a, b;

bool vis[100];
int idx = 0;
void dfs(int parent) {
    vis[parent] = true;
    for(int i = 0; i < idx; i++) {
        if(vis[i]) continue;
        if(a[parent] > a[i] && a[parent] < b[i])  dfs(i);
        else if(b[parent] > a[i] && b[parent] < b[i]) dfs(i);
    }
}
void solve(int n) {
    for(int i = 0; i < n; i++) {
        int type, x, y;
        cin >> type >> x >> y;

        if(type == 1) {
            a.pback(x);     b.pback(y);
            idx++;
        }

        if(type == 2) {
            memset(vis, 0, sizeof(vis));
            x--;    y--;
            dfs(x);
            if(vis[y]) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n;  cin >> n;
    solve(n);
    return 0;
}
