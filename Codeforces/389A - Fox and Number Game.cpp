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
void solve(int n) {
    int vc[n+10] = {0};

    int ans = 0;
    for(int i = 0; i < n; i++)
        cin >> vc[i];
    for(int j = 0; j < 30; j++) {
        ans = 0;
        sort(vc, vc+n);
        ans += vc[0];
        for(int i = 1; i < n; i++) {
            if(vc[i] > vc[0]) {
                while(vc[i] > vc[0]) vc[i] -= vc[0];
            }
            ans += vc[i];
        }
    }
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n;  cin >> n;
    solve(n);
    return 0;
}

