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

bool comp(pair<int, int> a, pair<int, int> b) {
    return a.ff-a.ss < b.ff-b.ss;
}
void solve(int n, int k) {
    vector<pair<int, int>> vc(n);
    ll ans = 0;
    for(int i = 0; i < n; i++) cin >> vc[i].ff;
    for(int i = 0; i < n; i++) cin >> vc[i].ss;
    sort(vc.begin(), vc.end(), comp);

    for(int i = 0; i < n; i++) {
        if(k == 0) ans += min(vc[i].ss, vc[i].ff);
        else {
            ans += vc[i].ff;
            k--;
        }
    }
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n, k;   cin >> n >> k;
    solve(n, k);
    return 0;
}
