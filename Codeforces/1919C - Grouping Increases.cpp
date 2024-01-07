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
    vector<int> vc;
    ll first = 1e9, last = 1e9, ans = 0;
    int p;
    for(int i = 0; i < n; i++) {
        cin >> p;
        vc.pback(p);
    }
    for(int j = 0; j < n; j++) {
        if(first > last) swap(last, first);

        if(vc[j] <= first) first = vc[j];
        else if(vc[j] <= last) last = vc[j];

        else {
            first = vc[j];
            ans++;
        }
    }
    cout << ans << endl;

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
