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
    bool flag = 0;

    for(int i = 0; i <= 810; i++) {
        for(int j = 0; j <= 8150; j++) {
            ll temp = n-(i*1234567)-(j*123456);
            if(temp < 0) continue;
            if(temp%1234 == 0) {
                flag = 1;   break;
            }
        }
    }
    if(flag) cout << "YES";
    else cout << "NO";
    return 0;
}
