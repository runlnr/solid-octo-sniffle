
#include <bits/stdc++.h>
#define ss second
#define ff first
#define AR 1e5+7
#define MOD 1e9+7
#define endl "\n"
#define sp ' '
#define pback push_back

using namespace std;
typedef long long ll;   typedef string str;
//chetmeorroiroiorr
void solve(int n) {
    bool ans = true;
    bool ar[n+5][n+5];

    memset(ar, 0, sizeof(ar));

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++) {
            char p;     cin >> p;
            ar[i][j] = p - '0';
        }

    for(int i = n-1; i > 0; i--)
        for(int j = n-1; j > 0; j--)
            if(ar[i][j] && !ar[i+1][j] && !ar[i][j+1]) ans = false;

    if(!ans) cout << "NO" << endl;
    else cout << "YES" << endl;

}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t, n;  cin >> t;
    while(t--) {
        cin >> n;   solve(n);
    }
    return 0;
}

