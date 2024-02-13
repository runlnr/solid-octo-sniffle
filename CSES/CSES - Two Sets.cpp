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
void solve(ll n) {
    ll ans = n*(n+1)/2;
    if(ans%2 == 0) {
        int i = n;
        cout << "YES" << endl;
        cout << n/2 << endl << n << sp;

        while(i > 0) {
            i -= 3;
            if(i < 1) break;
            cout << i << sp;    i--;
            if(i > 0) cout << i << sp;
        }
        cout << endl;
        cout << (n+1)/2 << endl << n-1 << sp << n-2 << sp;
        i = n-2;
        while(i > 0) {
            i -= 3;
            if(i < 1) break;
            cout << i << sp;    i--;
            if(i > 0) cout << i << sp;
        }

    }
    else cout << "NO";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    ll n;  cin >> n;
    solve(n);
}
