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
void solve(ll a, ll b, ll c) {
    vector<ll> vc = {a, b, c};
    sort(vc.begin(), vc.end());

    bool flag = true;
    ll temp = 0;

    if(vc[1] % vc[0] != 0) flag = 0;
    if(vc[2] % vc[0] != 0) flag = 0;

    temp = temp + (vc[1]/vc[0]-1) + (vc[2]/vc[0]-1);
    if(temp > 3) flag = 0;

    if(flag) cout << "YES";
    else cout << "NO";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    ll t, a, b, c;  cin >> t;
    while(t--) {
        cin >> a >> b >> c;
        solve(a, b, c);

        cout << endl;
    }
}
