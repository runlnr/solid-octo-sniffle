
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
ll dp[N];

void solve(int n) {
    map<char, int> mp, def;
    vector<char> vc(n), checklist;
    int idx = 0, ans = INT_MAX;

    for(int i = 0; i < n; i++) {
        cin >> vc[i];
        if(mp[vc[i]] == 0) {
            checklist.pback(vc[i]);
            idx = i;
        }
        mp[vc[i]]++;
    }

    for(int i = 0; i <= idx; i++) def[vc[i]]++;
    int j = 0;
    while(true) {
        while(def[vc[j]] > 1) {
            def[vc[j]]--;   j++;
        }
        ans = min(ans, idx-j+1);
        if(idx == n-1) break;
        idx++;   def[vc[idx]]++;
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

