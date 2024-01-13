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
    ll list = 0, ans = 0, num = 0;
    ll p;
    for(int i = 0; i < n-1; i++) {
        cin >> p;   list += p;
    }

    ans = n*(n+1)/2;
    num = ans - list;
    cout << num;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    ll n;  cin >> n;
    solve(n);
    return 0;
}
