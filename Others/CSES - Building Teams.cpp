
#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back

using namespace std;
typedef long long ll;   typedef string str;
//chetmeorroiroiorr
const int N = 1e5+7;
int n, m;
vector<int> ar[N];
bool vis[N], status[N], flag;
string ans;

void dfs(int n, bool g = 0) {
    vis[n] = true;
    status[n] = g;

    for(auto child : ar[n]) {
        if(vis[child]) {
            if(status[child] == g) flag = 1;
        }else dfs(child, !g);
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    cin >> n >> m;
    for(int i = 1; i <= m; i++) {
        int a, b;   cin >> a >> b;
        ar[a].pback(b);
        ar[b].pback(a);
    }

    for(int i = 1; !flag && i <= n; i++)
        if(!vis[i]) dfs(i);

    if(flag) cout << "IMPOSSIBLE" << endl;
    else {
        for(int i = 1; i <= n; i++)
           cout << status[i]+1 << sp;

    }
    return 0;
}

