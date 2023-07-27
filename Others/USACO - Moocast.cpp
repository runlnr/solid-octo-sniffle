
#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back

using namespace std;
typedef long long ll;   typedef string str;
//chetmeorroiroiorr
const ll MOD = 1e9+7, N = 1e5+7;
int n, maxans = 1, ans = 0;
bool vis[N];
struct cow {
    int x, y, p;
};
vector<int> adj[N];

void dfs(int parent) {
    if(vis[parent]) return;
    ans++;
    vis[parent] = true;
    for(auto child : adj[parent])
        dfs(child);
}
int main() {
    freopen("moocast.in", "r", stdin);
    freopen("moocast.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);


    cin >> n;
    vector<cow> vc(n);
    for(int i = 0; i < n; i++) {
        cin >> vc[i].x >> vc[i].y >> vc[i].p;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int distX = vc[i].x - vc[j].x, distY = vc[i].y - vc[j].y;
            if((distX*distX) + (distY*distY) <= (vc[i].p*vc[i].p))
                adj[i].pback(j);
        }
    }

    for(int i = 0; i < n; i++) {
        ans = 0;
        fill(vis, vis+n, false);
        dfs(i);
        maxans = max(ans, maxans);
    }

    cout << maxans << endl;
    return 0;

}

