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
    int cnt_low = 0, cnt_high = 0, p, ans = 0;
    bool flag1 = 0, flag2 = 0;

    for(int i = 1; i <= n; i++) {
        cin >> p;
        if(p == 1) cnt_high++;
        else cnt_low++;
    }
    if(cnt_low % 2 == 0) flag2 = 1;
    if(cnt_high >= cnt_low) flag1 = 1;
    if(!flag1 || !flag2) {
        while(cnt_high < cnt_low) {
            cnt_high++;     cnt_low--;
            ans++;
        }
        if(cnt_low % 2 != 0) ans++;
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
