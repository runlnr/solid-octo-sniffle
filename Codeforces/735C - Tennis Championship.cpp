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
ll fib[N];
ll solve(ll n) {
    fib[0] = 1;
    fib[1] = 2;
    if(n <= 2) return 1;
    for(int i = 2; i < N; i++) {
        fib[i] = fib[i-1]+fib[i-2];
        if(fib[i] > n) return i-1;
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    ll n;  cin >> n;
    cout << solve(n);
    return 0;
}
