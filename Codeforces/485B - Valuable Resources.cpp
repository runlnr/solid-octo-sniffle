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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    ll n;  cin >> n;
    ll maxn = 0, minn = INT_MAX, a, b, minx = INT_MAX;
    ll maxx = INT_MIN, miny = INT_MAX, maxy = INT_MIN;
    while(n--) {
        cin >> a >> b;
        miny = min(miny, b);
        maxy = max(maxy, b);

        maxx = max(maxx, a);    minx = min(minx, a);
    }
    ll ans = max((maxx-minx), (maxy-miny));
    cout << ans*ans;
    return 0;
}
