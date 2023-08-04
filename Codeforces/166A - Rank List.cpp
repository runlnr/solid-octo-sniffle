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
map<pair<int, int>, int> mp;
bool vis[J][J];
vector<int> sum;
vector<pair<int, int>> vc;

bool comp(pair<int, int> a, pair<int, int> b) {
    if(a.ff == b.ff) return a.ss < b.ss;
    return a.ff > b.ff;
}
void solve(int n, int m) {

    for(int i = 0; i < n; i++) {
        int a, b;   cin >> a >> b;
        mp[{a, b}]++;
        if(!vis[a][b]) {vc.pback({a, b});   vis[a][b] = true;}
    }
    sort(vc.begin(), vc.end(), comp);

    for(int i = 0; i < vc.size(); i++) {
        if(i == 0) sum.pback(mp[vc[i]]);
        else sum.pback(mp[vc[i]] + sum[i-1]);
    }

    int upper = upper_bound(sum.begin(), sum.end(), m) - sum.begin();
    if(sum[upper-1] == m) upper--;

    if(upper != 0) cout << sum[upper] - sum[upper-1];
    else cout << sum[upper];
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n, m;   cin >> n >> m;
    solve(n, m);
    return 0;
}
