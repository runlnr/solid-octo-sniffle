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
void solve(ll n, ll k) {
    ll mid = n/2, idx, targ, diff;
    vector<ll> vc(n);

    for(int i = 0; i < n; i++) cin >> vc[i];
    sort(vc.begin(), vc.end());
    targ = vc[mid];

    while(k >= 0) {
        ll up = upper_bound(vc.begin(), vc.end(), targ) - vc.begin() - 1;
        diff = (up-mid+1);
        if(up+1 < n) {
            up++;
            idx = (vc[up]-targ)*diff;
            if(k-idx >= 0) {k-=idx;     targ = vc[up];}
            else {
                idx = k/diff;
                if(k >= diff) {targ += idx; k %= diff;}
                else break;
            }
        }
        else {
            idx = k/diff;
            if(k >= diff) {targ += idx;     k%= diff;}
            else break;
        }
    }
    cout << targ;

}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n, k;   cin >> n >> k;
    solve(n, k);
    return 0;
}
