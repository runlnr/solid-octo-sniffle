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
struct burg {
    int a;  int b;  int c;
};
ll cash, ia, ib, ic, ans = 0, l = 0, r = 1e13;
vector<burg> vc(2);
ll calc(ll x) {
    ll temp1 = max(0*1ll, ia*x-vc[0].a)*vc[1].a,
    temp2 = max(0*1ll, ib*x-vc[0].b)*vc[1].b,
    temp3 = max(0*1ll, ic*x-vc[0].c)*vc[1].c;

    return temp1+temp2+temp3;
}
void bns() {
    while(l <= r) {
        ll mid = l+(r-l)/2;
        if(calc(mid) < cash) {
            if(calc(mid+1) > cash) {ans = mid;  break;}
            l = mid+1;
        }
        else if(calc(mid) == cash) {ans = mid;     break;}
        else if(calc(mid) > cash) r = mid-1;
    }

    cout << ans << endl;
}
void solve(str s) {
    for(int i = 0; i <= 1; i++) {
        cin >> vc[i].a >> vc[i].b >> vc[i].c;
    }
    cin >> cash;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'B') ia++;
        else if(s[i] == 'S') ib++;
        else ic++;
    }
    bns();
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    str s;  cin >> s;
    solve(s);
    return 0;
}
