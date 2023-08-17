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
bool vis[N];
map<int, int> mp;
void solve(int n) {
    vector<int> vc(n);

    ll p, ans = 0, temp = 0, remain = 0;
    for(int i = 0; i < n; i++) {
        cin >> vc[i];
        mp[vc[i]]++;
        if(mp[vc[i]] == 1) remain++;
    }
    for(int i = 0; i < n; i++) {
        mp[vc[i]]--;
        if(mp[vc[i]] == 0) remain--;

        if(!vis[vc[i]]) {
            ans += remain;
            vis[vc[i]] = true;
        }
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
