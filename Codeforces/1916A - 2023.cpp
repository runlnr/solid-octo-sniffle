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
bool comp(pair<int, int> a, pair<int, int> b) {
    if(a.ss - a.ff < b.ss - b.ff) return a < b;
}
void solve(int n, int k) {
    vector<int> vc(n);

    ll ans = 1;
    for(int i = 0; i < n; i++) {
        cin >> vc[i];
        ans *= vc[i];
    }
    if(ans > 2023) cout << "NO";
    else {
        if(2023%ans == 0) {
            cout << "YES" << endl;
            cout << 2023/ans << sp;
            for(int i = 0; i < k-1; i++) cout << 1 << sp;
        }
        else cout << "NO";
    }
    cout << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t;  cin >> t;
    while(t--) {
        int n, k;   cin >> n >> k;
        solve(n, k);
    }
    return 0;
}
