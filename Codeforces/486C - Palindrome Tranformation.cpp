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

const int MOD = 1e9+7, N = 1e5+7, J = 1e3+7;
vector<char> vc;
vector<pair<int, int>> pos;
ll ans = 0, temp = 0;
int mxdf = INT_MIN, mndf = INT_MAX, diff =0;
bool flag = 0;

ll calc(int i, int opp) {
    int f = min(vc[i], vc[opp]) - 'a';
    int s = max(vc[i], vc[opp]) - 'a';
    return min(abs(f - s), abs((f+26)-s));
}
void solve(int n, int m) {
    vc.resize(n);
    m--;
    for(int i = 0; i < n; i++) cin >> vc[i];

    for(int i = n/2-1; i >= 0; i--) {
        int opposite = n-i-1;
        if(vc[i] != vc[opposite]) {
            if(m <= (n/2-1)) pos.pback({i, calc(i, opposite)});
            else pos.pback({opposite, calc(i, opposite)});
            flag = 1;
        }
    }

    if(flag) {
        for(int i = 0; i < pos.size(); i++) {
            if(i == 0) {
                temp = pos[i].ff;
                ans += pos[i].ss;
            }
            else {
                ans = ans + abs(temp - pos[i].ff) + pos[i].ss;
                temp = pos[i].ff;
            }
        }
        diff = min(abs(pos[0].ff - m), abs(pos[pos.size()-1].ff - m));
        ans += diff;
    }
    else ans = 0;
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n, m;   cin >> n >> m;
    solve(n, m);
    return 0;
}
