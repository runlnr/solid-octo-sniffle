
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
map<int, int> mp;
void solve(int n, int k) {
    vector<int> vc(n);
    int ans = 0;

    for(int i = 0; i < n; i++) {
        cin >> vc[i];
        if(vc[i]+k <= 5) ans++;
    }
    cout << ans/3 << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n, k;   cin >> n >> k;
    solve(n, k);
    return 0;
}

