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
vector<int> vc[N];
void solve(int n) {
    vector<int> vc(n);
    ll ans = 0;

    for(int i = 0; i < n; i++) cin >> vc[i];
    sort(vc.begin(), vc.end());

    for(int i = 0; i < n/2; i++) {
        ll temp = vc[i]+vc[n-1-i];
        ans += (temp*temp);
    }
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n;  cin >> n;
    solve(n);
    return 0;
}
