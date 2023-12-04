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
pair<ll, ll> ar[200010];
void solve(str s) {

    str heavy = "heavy", metal = "metal";
    bool prev = 0;
    ll cnt = 1, met_encounter = 0, ans = 0;
    ar[0] = {0, 1};

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'h') {
            ll temp = i;
            bool other = 0, flag = 1;

            for(int j = 0; j < 5; j++) {
                if(heavy[j] != s[i+j]) flag = 0;
                if(s[i+j] == 'm') {
                    temp = i+j-1;   other = 1;
                }
            }
            if(other) i = temp;

            if(flag) {
                if(ar[cnt].ss == 0) ar[cnt].ff++;
                else {
                    cnt++;      ar[cnt] = {1, 0};
                }
            }
        }
        if(s[i] == 'm') {
            ll temp = 0;
            bool other = 0, flag = 1;
            for(int j = 0; j < 5; j++) {
                if(metal[j] != s[i+j]) flag = false;
                if(s[i+j] == 'h') {
                    temp = i+j-1;   other = 1;
                }
            }

            if(other) i = temp;

            if(flag) {
                if(ar[cnt].ss == 1) {
                    met_encounter++;
                    ar[cnt].ff = met_encounter;
                }
                else {
                    met_encounter++;
                    cnt++;     ar[cnt] = {met_encounter, 1};
                }
            }
        }
    }

    for(int i = 0; i <= cnt; i++) {
        if(ar[i].ss == 0 && i != cnt) {
            ll temp = ar[i].ff*(met_encounter - ar[i-1].ff);
            ans += temp;
        }
    }
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    str s;  cin >> s;
    solve(s);
    return 0;
}
