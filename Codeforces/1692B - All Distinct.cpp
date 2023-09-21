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
vector<int> vc;

const int MOD = 1e9+7, N = 1e5+7, J = 1e3+7;
bool vis[10005] = {0};
void solve(int n) {
    memset(vis, 0, sizeof(vis));
    int cnt = 0, total = 0, p;

    for(int i = 0; i < n; i++) {
        cin >> p;
        if(!vis[p]) {vis[p] = 1;    cnt++;}
        else total++;
    }
    if(total%2 != 0) cnt--;

    cout << cnt << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t;  cin >> t;
    while(t--) {
        int n;  cin >> n;
        solve(n);
    }
}
