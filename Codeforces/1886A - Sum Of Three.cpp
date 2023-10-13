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
int dp[1000005];
void solve(ll n) {
    if(n < 7) cout << "NO" << endl;
    else {
        n--;
        int a = 2, b = -1;
        for(int i = 2; i <= n; i++) {
            if(i%3 != 0 && n-i != i) {
                if((n-i)%3 != 0 && n-i > 1) {
                    b = n-i;    a = i;
                    break;
                }
            }
        }

        if(b != -1) {
            cout << "YES" << endl;
            cout << 1 << sp << a << sp << b << endl;
        }
        else cout << "NO" << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    ll t, n;    cin >> t;
    while(t--) {
        cin >> n;
        solve(n);
    }
}
