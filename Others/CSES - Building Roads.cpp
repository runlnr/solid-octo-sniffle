
#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back

using namespace std;
typedef long long ll;   typedef string str;
//chetmeorroiroiorr
const ll N = 1e6+7;
ll n, m;
vector<ll> vc[N];
vector<ll> no_r;
bool vis[N];

void dfs(ll parent) {
    if(vis[parent]) return;
    vis[parent] = true;
    for(ll child : vc[parent]) {
        if(!vis[child]) {
            dfs(child);
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    cin >> n >> m;

    memset(vis, 0, sizeof(vis));
    for(ll i = 0; i < m; i++) {
        ll a, b;   cin >> a >> b;
        a--;    b--;
        vc[a].pback(b);
        vc[b].pback(a);
    }

    for(ll i = 0; i < n; i++) {
        if(!vis[i]) {
            no_r.pback(i);    dfs(i);
        }
    }

    cout << no_r.size()-1 << endl;
    for(int i = 1; i < no_r.size(); i++) 
        cout << no_r[i-1]+1 << sp << no_r[i]+1 << endl;
    return 0;
}

