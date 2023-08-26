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
ll n, a, b, ans = 0;
ll calc(ll mid) {
    ll temp = (mid/a)+(mid/b);
    return temp;
}
void bsr() {
    n--;
    ll l = 1, r = 2;

    while(calc(r) <= n) r*=2;
    r *= 2;

    for(int i = 0; i < 100; i++) {
        ll mid = l+(r-l)/2;
        if(calc(mid) >= n) r = mid;
        else l = mid;
    }
    cout << r+min(a, b) << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    cin >> n >> a >> b;
    if(n < 1) cout << 0;
    else if(n == 1) cout << min(a, b);

    else bsr();
    //Remember to check for 0s and 1s cases
}
