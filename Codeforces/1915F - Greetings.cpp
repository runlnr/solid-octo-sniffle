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
bool comp(pair<ll, ll> a, pair<ll, ll> b) {
    if(a.ss - a.ff < b.ss - b.ff) return a < b;
}
void solve(ll n) {
    vector<pair<ll, ll>> vc(n);
    vector<int> first(n), second(n);

    ll ans = 0, temp;
    for(int i = 0; i < n; i++) {
        cin >> vc[i].ff >> vc[i].ss;
        first[i] = vc[i].ff;
        second[i] = vc[i].ss;
    }
    sort(second.begin(), second.end());
    sort(first.begin(), first.end());

    sort(vc.begin(), vc.end(), comp);
    for(int i = vc.size()-1; i >= 0; i--) {
        int pluss = lower_bound(first.begin(), first.end(), vc[i].ff) - first.begin();
        int minuss = lower_bound(second.begin(), second.end(), vc[i].ss) - second.begin();

        temp = (first.size()-minuss-1) - (first.size()-pluss-1);
        if(temp > 0) ans += temp;

        first.erase(first.begin()+pluss);
        second.erase(second.begin()+minuss);
    }
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t;  cin >> t;
    while(t--) {
        int n;  cin >> n;
        solve(n);
    }
    return 0;
}
