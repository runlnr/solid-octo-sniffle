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
vector<int> ar[N], realval;
bool vis[N];
int n, m;
bool comp(pair<int, int> a, pair<int, int> b) {
    return a.ff > b.ff;
}
void solve(int n, int m) {
    memset(vis, 0, sizeof(vis));
    vector<pair<int, int>> val;
    int a, b, ans = 0, p;

    for(int i = 0; i < n; i++) {
        cin >> p;   val.pback({p, i});
        realval.pback(p);
    }
    sort(val.begin(), val.end(), comp);
    for(int i = 0; i < m; i++) {
        cin >> a >> b;
        a--;    b--;
        ar[a].pback(b);     ar[b].pback(a);
    }
    for(int i = 0; i < n; i++) {
        int temp = 0, idx = val[i].ss;

        for(int i = 0; i < ar[idx].size(); i++) {
            int pos = ar[idx][i];
            if(!vis[pos]) temp += realval[pos];
        }
        ans += temp;
        vis[idx] = true;
    }
    cout << ans << endl;

}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    cin >> n >> m;
    solve(n, m);
    return 0;
}

