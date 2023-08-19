#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back
#define dst distance

using namespace std;
typedef long long ll;   typedef string str;
typedef long double ld;
const int MOD = 1e9+7, N = 1e5+7, J = 1e3+7;
//chetmeorroiroiorr
vector<int> vc[N];
ld dfs(int parent, int node) {
    ld ans = 0;
    for(auto child : vc[parent]) {
        if(child != node) ans += dfs(child, parent)+1;
    }
    return ans ? ans/(vc[parent].size() - (node != -1)) : 0;
}
void solve(int n) {

    for(int l, r, i = 1; i < n; i++) {
        cin >> l >> r;
        l--;    r--;
        vc[l].pback(r);     vc[r].pback(l);
    }

    cout << fixed << dfs(0, -1) << setprecision(7) << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n;  cin >> n;
    solve(n);
    return 0;
}
