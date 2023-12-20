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
    ll ans = 0;

    for(int i = 0; i < n; i++) cin >> vc[i];
        sort(vc.begin(), vc.end());

    if(n == 1) ans = vc[0];
    else {
        ll temp = 1;
        for(int i = 0; i < n-1; i++) {
            temp++;
            ans += (vc[i]*temp);
        }
        ans += (vc[n-1]*temp);
    }

    cout << ans;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    ll n;  cin >> n;
    solve(n);
    return 0;
}
