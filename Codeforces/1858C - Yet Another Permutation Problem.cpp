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
void solve(int n) {
    bool vis[N] = {0};

    int idx = 0;
    for(int i = 2; i <= n; i++) {
        if(!vis[i]) {
            idx = i;
            while(idx <= n) {
                cout << idx << sp;
                vis[idx] = true;
                idx *= 2;
            }
        }
    }
    cout << 1 << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t, n;   cin >> t;
    while(t--) {cin >> n;   solve(n);}
    return 0;
}
