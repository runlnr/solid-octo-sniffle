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
int ar[510][510];
void solve(ll n, ll k) {
    int temp = 1;
    ll ans = 0;

    for(int i = 0; i < k; i++)
        for(int j = 0; j < n; j++) {
            ar[j][i] = temp;
            temp++;
        }

    for(int i = 0; i < n; i++) {
        ans += temp;
        for(int j = k; j < n; j++) {
            ar[i][j] = temp;
            temp++;
        }
    }

    cout << ans << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) cout << ar[i][j] << sp;
            cout << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    ll n, k;    cin >> n >> k;
    solve(n, k-1);
    return 0;
}
