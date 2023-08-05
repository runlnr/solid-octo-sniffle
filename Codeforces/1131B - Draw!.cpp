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
bool vis[N];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n, a = 0, b = 0;  cin >> n;
    int olda = 0, oldb = 0;
    ll ans = 1;
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        int temp = min(a, b), prev = max(olda, oldb);
        ans += max(0, temp-prev+1);
        if(olda == oldb) ans--;
        olda = a;   oldb = b;
    }
    cout << ans << endl;
    return 0;
}
