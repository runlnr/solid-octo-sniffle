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
    while(n != 1) {
        cout << n << sp;
        if(n%2 == 0) n/=2;
        else if(n%2 == 1) n = n*3 + 1;

    }
    cout << 1;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    ll n;  cin >> n;
    solve(n);
    return 0;
}
