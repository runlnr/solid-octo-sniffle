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
    int tax = n-1, maxn = 0, p;
    map<int, int> mp;
    vector<int> vc(n), after;

    for(int i = 0; i < n*(n-1)/2; i++) {
        cin >> p;
        if(!mp[p]) vc.pback(p);
        maxn = max(maxn, p);
        mp[p]++;
    }
    sort(vc.begin(), vc.end());
    for(auto i : vc) {
        while(mp[i] > 0) {
            mp[i] -= tax;
            tax--;
            after.pback(i);
        }
    }

    for(auto i : after) cout << i << sp;
    cout << maxn << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t;  cin >> t;
    while(t--) {
        int n;  cin >> n;
        solve(n);
    }
    return 0;
}
