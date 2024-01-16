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
map<int, bool> mp;
void solve(int n) {
    vector<ll> vc(n), newvc(n);

    ll cur = 0, ans = 0;
    for(int i = 0; i < n; i++) {
        cin >> vc[i];
        if(vc[i] >= cur) {
            newvc[i] = vc[i];
            cur = vc[i];
        }
        else if(vc[i] < cur) {
            newvc[i] = cur;
        }
    }

    for(int i = 0; i < n; i++) ans += (newvc[i] - vc[i]);
    cout << ans;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n;  cin >> n;
    solve(n);
    return 0;
}
