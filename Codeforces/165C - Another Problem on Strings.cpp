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
vector<int> vc;
ll calc(int n) {
    ll ans = 0;
    for(int i = 1; i <= n; i++) ans += i;
    return ans;
}
void solve(int k, str s) {
    vc.pback(-1);
    int last = 0;
    ll ans = 0, a, b;
    for(int i = 0; i < s.size(); i++) {
        if(s[i]-'0' == 1) vc.pback(i);
    }
    vc.pback(s.size());
    for(int i = k; i < vc.size()-1; i++) {
        a = vc[i-k+1]-vc[i-k]-1;
        b = vc[i+1]-vc[i]-1;
        if(a < 0) a = 0;    if(b < 0) b = 0;
        ans += (a*b)+a+b+1;
    }
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int k;  str s;
    cin >> k >> s;
    if(k > s.size()) cout << 0;
    else if(k == 0) {
        ll cnt = 0, ans = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '1') {
                ans += calc(cnt);   cnt = 0;
            }
            else cnt++;
        }
        ans += calc(cnt);
        cout << ans << endl;
    }
    else solve(k, s);
    return 0;
}
