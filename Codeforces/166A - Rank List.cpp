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
map<pair<int, int>, int> cntTeams;
bool vis[J][J];
vector<int> pos;
vector<pair<int, int>> teams;

bool comp(pair<int, int> a, pair<int, int> b) {
    if(a.ff == b.ff) return a.ss < b.ss;
    return a.ff > b.ff;
}
void solve(int n, int m) {

    for(int i = 0; i < n; i++) {
        int a, b;   cin >> a >> b;
        cntTeams[{a, b}]++;
        if(!vis[a][b]) {teams.pback({a, b});   vis[a][b] = true;}
    }
    sort(teams.begin(), teams.end(), comp);

    for(int i = 0; i < teams.size(); i++) {
        if(i == 0) pos.pback(cntTeams[teams[i]]);
        else pos.pback(cntTeams[teams[i]] + pos[i-1]);
    }

    int upper = upper_bound(pos.begin(), pos.end(), m) - pos.begin();
    if(pos[upper-1] == m) upper--;

    if(upper != 0) cout << pos[upper] - pos[upper-1];
    else cout << pos[upper];
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n, m;   cin >> n >> m;
    solve(n, m);
    return 0;
}
