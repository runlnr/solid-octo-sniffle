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
map<ll, ll> mp;
void solve(int n) {
    int a, b;
    ll ans = 0, temp = 0;
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        mp[a]++;    mp[b]--;
    }

    for(auto i : mp) {
        temp += i.ss;
        ans = max(temp, ans);
    }
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n;  cin >> n;
    solve(n);
}
