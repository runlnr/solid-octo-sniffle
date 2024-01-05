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
ll n;
vector<ll> vc;
ll rec(int idx, ll sum1, ll sum2) {
    if(idx == n) return abs(sum1 - sum2);

    else return min(rec(idx+1, sum1+vc[idx], sum2),
        rec(idx+1, sum1, sum2 + vc[idx]));
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    cin >> n;
    vc.resize(n);
    for(int i = 0; i < n; i++) cin >> vc[i];
    cout << rec(0, 0, 0) << endl;
    return 0;
}
