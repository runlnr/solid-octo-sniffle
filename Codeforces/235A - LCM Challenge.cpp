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
ll ans = 0;

void solve(ll n) {
    if(n == 1) ans = 1;
    else if(n == 2) ans = 2;
    else if(n == 3) ans = 6;
    else if(n%2 == 0) {
        if(n%3 == 0) ans = (n-1)*(n-2)*(n-3);
        else ans = n*(n-1)*(n-3);
    }
    else {
        ans = n*(n-1)*(n-2);
    }
    cout << ans;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    ll n;  cin >> n;
    solve(n);
    return 0;
}
