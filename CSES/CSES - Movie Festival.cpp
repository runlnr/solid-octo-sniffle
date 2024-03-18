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

bool comp(pair<int, int> a, pair<int, int> b) {
    return a.ss < b.ss;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    vector<pair<int, int>> vc, cnt;
    int n, a, b;  cin >> n;
    int prev_end = 0, ans = 0;

    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        vc.pback({a, b});
    }
    sort(vc.begin(), vc.end(), comp);
    for(int i = 0; i < n; i++) {
        if(i == 0) {
            prev_end = vc[i].ss;
            ans++;
        }
        else {
            if(vc[i].ff >= prev_end) {
                ans++;
                prev_end = vc[i].ss;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
