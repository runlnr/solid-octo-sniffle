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
void solve(int n) {
    vector<int> a(n), b(n);
    map<int, int> pos, cnt;
    int ans = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        pos[a[i]] = i;
    }

    for(int i = 0; i < n; i++) {
        cin >> b[i];
        int temp = pos[b[i]] - i;
        if(temp < 0) temp = n-i+pos[b[i]];

        cnt[temp]++;
        ans = max(cnt[temp], ans);
    }

    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n;  cin >> n;
    solve(n);
}
