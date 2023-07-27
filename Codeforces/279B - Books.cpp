#include <bits/stdc++.h>
#define endl "\n"
#define sp ' '

using namespace std;
typedef string str;     typedef long long ll;
int ar[100010];  ll mcd[100010];
void solve(int n, int t) {
    mcd[0] = 0;
    for(int i = 1; i <= n; i++) {
        cin >> ar[i];
        mcd[i] = mcd[i-1] + ar[i];
    }
    ll i = 1, j = 1, total = 0, ans = 0;
    while(i < n && j <= n) {
        total = mcd[j] - mcd[i-1];
        bool rmn = t > total;
        if(rmn) {
            j++;
        }
        else {
            if(t < total) j--;
            ans = max(ans, j-i+1);
            i++;
        }
    }
    if(n == 1 && t >= ar[1]) ans = max(ans, j-i+1);
    else ans = max(ans, j-i);
    cout << ans << endl;
}
int main() {
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);
    int n, t;   cin >> n >> t;
    solve(n, t);
    return 0;
}
 
