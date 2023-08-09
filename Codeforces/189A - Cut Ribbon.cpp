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

    int n, a, b, c, ans = 0;
    cin >> n >> a >> b >> c;

    for(int i = 0; i <= n/a; i++) {
        for(int j = 0; j <= n/b; j++) {
            int temp = a*i + b*j, z;
            if(temp > n) break;
            z = n-temp;
            if(z % c == 0) ans = max(ans, z/c+i+j);
        }
    }
    cout << ans << endl;
    return 0;
}
