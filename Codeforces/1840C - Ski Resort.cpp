#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back
#define dst distance

using namespace std;
typedef long long ll;   typedef string str;

const int MOD = 1e9+7, N = 1e5+7, J = 1e3+7;
//chetmeorroiroiorr

ll calc(int k, int maxn) {
    ll ans = 0;
    for(int i = 0; i <= maxn-k+1; i++)
        ans += i;
    return ans;
}
void solve(int n, int k, int q) {
    vector<int> vc(n), tempe(n), ar;
    ll ans = 0;

    for(int i = 0; i < n; i++) {
        cin >> vc[i];
        if(vc[i] <= q) {
            if(i == 0) tempe[i] = 1;
            else tempe[i] = tempe[i-1]+1;
        }
        else if(vc[i] > q) {
            tempe[i] = 0;
            if(i > 0 && tempe[i-1] >= k)
                ar.pback(tempe[i-1]);
        }
    }
    if(tempe[n-1] >= k) ar.pback(tempe[n-1]);

    for(auto child : ar) ans += calc(k, child);
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t;  cin >> t;
    int n, k, q;
    while(t--) {
        cin >> n >> k >> q;
        solve(n, k, q);
    }
    return 0;
}
