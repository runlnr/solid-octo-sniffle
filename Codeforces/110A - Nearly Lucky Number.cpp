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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    ll n;  cin >> n;
    ll cnt = 0;

    while(n > 0) {
        ll digit = n%10;
        if(digit == 4 || digit == 7) cnt++;
        n /= 10;
    }
    if(cnt == 4 || cnt == 7)
        cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

