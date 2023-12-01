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
vector<int> vc;
void solve(int n) {
    vc.resize(n);

    int limak = 0, ans = 0;
    cin >> limak;
    ans = limak;
    for(int i = 0; i < n-1; i++) cin >> vc[i];
    vc[n-1] = -1;
        sort(vc.begin(), vc.end(), greater<int>());

    int j = 0;
    while(true) {
        if(ans > vc[0] && ans > vc[1]) break;
        ans++;     vc[0]--;
        sort(vc.begin(), vc.end(), greater<int>());
    }

    cout << ans-limak << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n;  cin >> n;
    solve(n);
    return 0;
}
