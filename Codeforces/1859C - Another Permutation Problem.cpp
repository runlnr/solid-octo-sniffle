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
void solve(int n) {
    vector<int> vc;
    vc.pback(n);    vc.pback(n-1);

    ll ans = 0, idx = 1, temp_ans = 0, fixed = 0, temp_mx = INT_MIN, j = 0, k;
    bool flag = 1;
    for(int i = 1; i <= n; i++) ans += (i*i);
    fixed = ans;       ans = 0;
    while(idx < n) {
        temp_mx = INT_MIN, j = 0;
        temp_ans = fixed;
        for(int i = n; i >= n-idx; i--) temp_ans -= (i*i);
        for(int i = n-idx; i <= n; i++) {
            k = vc[j]*i;
            temp_ans += k;
            j++;
            temp_mx = max(temp_mx, k);
        }
        temp_ans -= temp_mx;
        if(ans > temp_ans) flag = 0;
        ans = max(ans, temp_ans);
        idx++;
        vc.pback(n-idx);
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
