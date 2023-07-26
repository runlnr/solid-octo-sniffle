#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back

using namespace std;
typedef long long ll;   typedef string str;
//chetmeorroiroiorr
const ll MOD = 1e9+7;

void solve(int n, int m, int k, int h) {

    int ans = 0, diff = 0;
    for(int i = 1; i <= n; i++) {
        int temp;   cin >> temp;
        diff = abs(h-temp);
        if(diff % k == 0 && diff != 0) {
            diff /= k;
            if(m > diff) ans++;
        }
    }
    if(m <= 1) cout << 0 << endl;
    else cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t;  cin >> t;
    int n, m, k, H;
    while(t--) {
        cin >> n >> m >> k >> H;
        solve(n, m, k, H);
    }
    return 0;
}
 
