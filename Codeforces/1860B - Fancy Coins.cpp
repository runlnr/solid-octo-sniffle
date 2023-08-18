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
void solve(ll m, ll k, ll a1, ll ak) {
    ll ans = 0, fixed1 = a1;
    if(m >= ak*k) {m-= ak*k; ak = 0;}
    if(m < ak*k && k <= m) {
        if(k == m) {m -= k; ak--;}
        else {
            ll temp = m - (m%k);
            m -= temp;   ak = ak - (temp/k);
        }
    }
    while(ak > 0 && m >= k) {m-=k;  ak--;}

    if(m >= a1) {m-=a1;     a1=0;}
    if(m < a1) {m = 0;      a1 -= m;}
    while(a1 > 0 && m > 0) {m--; a1--;}
    while(m > 0) {
        if(m >= k) {
            ans += (m/k);   m%= k;
        }
        else if(m < k) {
            if(m + fixed1 >= k) {
                if(ak == 0) ans++;
            }
            else {ans += m;
            if(m <= a1) ans -= m;
            else ans -= a1;}

            m = 0;
        }
    }
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t;  cin >> t;
    while(t--) {
        ll m, k, a1, ak;
        cin >> m >> k >> a1 >> ak;
        solve(m, k, a1, ak);
    }
    return 0;
}
