#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back
#define dst distance

using namespace std;
typedef long long ll;   typedef string str;
typedef unsigned long long ull;

const int MOD = 1e9+7, N = 1e5+7, J = 1e3+7;
void solve(int n, int k) {
    map<int, int> mp;
    int a, b, ans = 0, idx = 0, temp;

    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        idx = max(idx, a);
        mp[a] += b;
    }

    for(int i = 1; i <= idx+1; i++) {
        ans += min(k, mp[i]);
        if(k < mp[i]) {
            int cur = mp[i]-k;
            mp[i+1] += min(k, cur);
        }
    }
    cout << ans << endl;
}
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n, k;   cin >> n >> k;
    solve(n, k);
    return 0;
}
