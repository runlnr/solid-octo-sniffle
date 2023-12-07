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

void solve(int n) {
    map<str, int> mp;
    str s;
    int ans = 0;

    for(int i = 0; i < n; i++) {
        cin >> s;   mp[s]++;
    }
    for(auto i : mp) ans = max(ans, i.ss);
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n;  cin >> n;
    solve(n);
    return 0;
}
