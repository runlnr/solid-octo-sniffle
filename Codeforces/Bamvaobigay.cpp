
#include <bits/stdc++.h>
#define ss second
#define ff first
#define AR 1e5+7
#define MOD 1e9+7
#define endl "\n"
#define sp ' '
#define pback push_back

using namespace std;
typedef long long ll;   typedef string str;
//chetmeorroiroiorr

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    ll n, temp, ans = 0;
    cin >> n;
    for(ll i = 1; i <= n; i++) {
        ll p;  cin >> p;
        if(i == 1) temp = p;
        else {
            if(temp == -1) temp = p;
            else if(p > temp) {ans += p;    temp = -1;}
            else if(p < temp) {ans += temp; temp = p;}
        }
    }
    if(temp != -1) ans += temp;
    cout << ans << endl;
    return 0;
}

