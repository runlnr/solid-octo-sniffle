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
void solve(ll n) {
    vector<ll> vc(n);
    map<ll, ll> mp;

    ll ans = 0;
    bool flag = 0;
    mp[0]++;
    for(int i = 0; i < n; i++) cin >> vc[i];
    for(int i = 0; i < n; i++) {
        if(i%2 == 0) ans += vc[i];
        else ans -= vc[i];

        mp[ans]++;
        if(mp[ans] >= 2) flag = 1;
    }
    if(flag) cout << "YES";
    else cout << "NO";
    cout << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t;  cin >> t;
    while(t--) {
        ll n;  cin >> n;
        solve(n);
    }
    return 0;
}
