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

    int t;  cin >> t;
    while(t--) {
        int n, p;  cin >> n;
        ll ans = 0;
        for(int i = 0; i < n; i++) {
            cin >> p;   ans += p;
        }

        ll temp = sqrt(ans);
        if(ans == temp*temp) cout << "YES";
        else cout << "NO";

        cout << endl;
    }
    return 0;
}
