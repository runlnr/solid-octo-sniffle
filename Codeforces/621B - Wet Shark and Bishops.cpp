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
    vector<pair<int, int>> vc(n);
    map<pair<int, int>, int> mp, mp2;

    int a, b;
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        int ltr_a = a, ltr_b = b;

        ltr_a -= min(a, b);
        ltr_b -= min(a, b);
        
        mp[{ltr_a, ltr_b}]++;
        mp2[{0, b+a}]++;
    }

    for(auto i : mp) {
        ans += (i.ss*(i.ss-1)/2);
    }
    for(auto i : mp2) {
        ans += (i.ss*(i.ss-1)/2);
    }

    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    ll n;  cin >> n;
    solve(n);
    return 0;
}
