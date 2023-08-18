#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back
#define dst distance

using namespace std;
typedef long long ll;   typedef string str;
const int MOD = 1e9+7, N = 1e5+7, J = 1e3+7;
//chetmeorroiroiorr
void solve(int n) {
    vector<int> vc;
    vc.pback(0);
    for(int i = 1; i <= sqrt(n); i++) {
        ll temp = i*(n/i);
        if(temp <= n) {
            if(i != sqrt(n) && i != n/i) {
                vc.pback(i);    vc.pback(n/i);
            }
            else vc.pback(i);
        }
    }
    sort(vc.begin(), vc.end());

    cout << vc.size() << endl;
    for(auto child : vc) cout << child << sp;
        cout << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t, n;  cin >> t;
    while(t--) {
        cin >> n;
        solve(n);
    }
    return 0;
}
