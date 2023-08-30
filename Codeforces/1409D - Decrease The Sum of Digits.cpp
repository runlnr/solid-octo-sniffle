#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back
#define dst distance

using namespace std;
typedef long long ll;   typedef string str;
typedef unsigned long long ull;

const int MOD = 1e9+7, N = 1e5+7, J = 1e3+7;
ll n, k;
ll total(ll n) {
    int ans = 0, temp;
    while(n > 0) {
        temp = n%10;    ans += temp;
        n /= 10;
    }
    return ans;
}
void solve(ll n, ll k) {
    if(total(n) <= k) cout << 0;
    else {
        ll time = 1, ans = 0, sub = 0;
        int digit = 0;

        for(int i = 0; i < 19; i++) {
            digit = (n/time)%10;

            sub = time*((10-digit) % 10);
            n += sub;   ans += sub;
            if(total(n) <= k) break;
            time *= 10;
        }
        cout << ans;
    }
    cout << endl;
}
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t;  cin >> t;
    while(t--) {
        cin >> n >> k;
        solve(n, k);
    }
    return 0;
}
