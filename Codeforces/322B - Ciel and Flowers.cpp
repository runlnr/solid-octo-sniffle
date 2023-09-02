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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int a, b, c;
    ll ans = 0, d;
    cin >> a >> b >> c;

    d = min(min(a, b), c)-1;
    d = max(0*1ll, d);

    a-=d;   b-=d;   c-=d;
    ans += d;
    ll temp = (a-1)/3 + (b-1)/3 + (c-1)/3;
    if(a > 0 && b > 0 && c > 0) temp++;

    ans += max((a/3)+(b/3)+(c/3)*1ll, temp);

    cout << ans << endl;
    return 0;
}
