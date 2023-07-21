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
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);
 
    int n, m;   cin >> n >> m;
    if(n < m) cout << -1;
    else {
        int ans = 0, temp = n/2;
        if(n % 2 == 1) temp++;
        ans = temp;
        if(ans % m == 0) cout << ans << endl;
        else {
            while(temp--) {
                ans++;
                if(ans%m == 0) {cout << ans;    return 0;}
            }
            cout << -1 << endl;
        }
    }
    return 0;
}
