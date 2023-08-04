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
int total(str a, str b) {
    for(int i = 0; i < max(a.size(), b.size()); i++) {

    }
}
void solve(str a, str b) {
    int ans = 0, bsz = b.size();
    bool flag = 0, dec = 0;
    while(b.size() > a.size())
        a = '0' + a;

    for(int i = 0; i < a.size(); i++) {
        int l = a[i] - '0', r = b[i] - '0';
        if(flag) ans += 9;
        else {
            if(abs(l-r) != 0) {flag = 1;}
            ans += abs(l-r);
        }
    }
    cout << ans << endl;

}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t;  cin >> t;
    str a, b;
    while(t--) {
        cin >> a >> b;
        solve(a, b);
    }
    return 0;
}
