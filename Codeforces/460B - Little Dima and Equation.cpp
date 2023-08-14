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
ll ltnp(ll n, ll a) {
    if(a == 0) return 1;
    ll x = ltnp(n, a/2);
    if(a%2 == 0) return x*x;
    else return x*x*n;
}
ll calc(int n) {
    int ans = 0, temp;
    while(n > 0) {
        temp = n%10;
        ans += temp;
        n /= 10;
    }
    return ans;
}
void solve(int a, int b, int c) {
    vector<ll> vc;
    for(int i = 1; i <= 81; i++) {
        ll temp = b*ltnp(i, a)+c;
        if(temp > MOD) break;
        if(temp > 0 && calc(temp) == i) vc.pback(temp);

    }
    cout << vc.size() << endl;
    for(auto i : vc) cout << i << sp;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int a, b, c;    cin >> a >> b >> c;
    solve(a, b, c);
    return 0;
}
