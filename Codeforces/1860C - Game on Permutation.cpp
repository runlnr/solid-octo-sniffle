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
void solve(int n) {
    vector<int> vc(n);
    for (int i = 0; i < n; i++) cin >> vc[i];
    int mn1 = 1e9, mn = vc[0], ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (vc[i] > mn && vc[i] < mn1)
        {
            mn1 = min(mn1, vc[i]), ans++;
        }
        mn = min(mn, vc[i]);
    }
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t, n;  cin >> t;
    while(t--) {
        cin >> n;
        solve(n);
    }
    return 0;
}
