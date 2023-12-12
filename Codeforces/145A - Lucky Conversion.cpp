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

void solve(str a, str b) {

    int fours = 0, sevens = 0, ans = 0;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            if(a[i] == '7') sevens++;
            else fours++;
        }
    }

    ans = max(sevens, fours);
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    str a, b;  cin >> a >> b;
    solve(a, b);
    return 0;
}
