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
bool solve(ll n) {
    ll sum = 0, ones = 0, left = 0, p;

    for(int i = 0; i < n; i++) {
        cin >> p;   sum += p;
        if(p != 1) ones++;
    }


    if(sum == 0 || n == 1 || ones == 0) return 0;
    sum -= ones;
    left = n-ones;
    if(left != 0) sum /= left;
    if(sum > 1) return 1;
    else return 0;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    ll t;  cin >> t;
    while(t--) {
        ll n;  cin >> n;
        bool flag = solve(n);
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    return 0;
}
