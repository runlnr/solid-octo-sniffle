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
void solve(ll n) {
    ll ans = 0, mul = 1, endn = 9, num = 0, startn = 1;
    while(num != n) {
        if(n > endn) {
            num = endn;
            ll temp = (endn-startn+1);
            ans += (temp*mul);
            endn = (endn*10)+9;
            startn *= 10;
        }
        else if(n <= endn) {
            ll temp = (n-startn+1);
            ans += (mul*temp);
            num = n;
        }
        mul++;
    }
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    ll n;   cin >> n;
    solve(n);
    return 0;
}
