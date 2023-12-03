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

void solve(int n, int k) {
    int l = 1, r = n, orgk = k, cnt = 0;
    while(k > 1) {
        if(cnt%2 == 0) {
            cout << l << sp;    l++;
        }
        else if(cnt%2 == 1) {
            cout << r << sp;    r--;
        }
        k--;    cnt++;
    }

    if(orgk%2 == 1 ) for(int i = l; i <= r; i++) cout << i << sp;
    else if(orgk%2 == 0) for(int i = r; i >= l; i--) cout << i << sp;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int a, b;   cin >> a >> b;
    solve(a, b);
    return 0;
}
