#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back

using namespace std;
typedef long long ll;   typedef string str;
const int MOD = 1e9+7, N = 1e5+7, J = 1e3+7;
//chetmeorroiroiorr
bool type[N];
vector<int> vc[N], dis;
void dfs(int parent, int node) {
    bool flag = 0;
    if(type[parent] == true) flag = 1;

    for(int i : vc[parent]) {
        if(i == node) continue;
        if(type[i] == false) flag = 0;
        dfs(i, parent);
    }
    if(flag) dis.pback(parent);
}
void solve(int n) {
    int a, b, st_point = 0;
    for(int i = 1; i <= n; i++) {
        cin >> a >> b;
        if(a == -1) st_point = i;
        else {vc[a].pback(i);     vc[i].pback(a);}
        type[i] = b;
    }
    dfs(st_point, 0);

    if(dis.size() == 0) cout << -1;
    else {
        sort(dis.begin(), dis.end());
        for(auto i : dis) cout << i << sp;
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n;  cin >> n;
    solve(n);
    return 0;
}
