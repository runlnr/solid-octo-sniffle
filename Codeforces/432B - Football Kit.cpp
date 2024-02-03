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
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n;  cin >> n;
    vector<int> home(n), away(n);
    map<int, int> mp;

    int ans_home = 0, ans_away = 0;

    for(int i = 0; i < n; i++) {
        cin >> home[i] >> away[i];
        mp[home[i]]++;
    }
    for(int i = 0; i < n; i++) {
        ans_home = n-1;   ans_away = 0;
        ans_home += mp[away[i]];
        ans_away += (n-1-mp[away[i]]);
        cout << ans_home << sp << ans_away << endl;
    }
    return 0;
}
