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
    int cnt = 0, org = k;
    while(k % n == 0) {
        k /= n;     cnt++;
    }
    if(k == 1) {
        cout << "YES";
        cout << endl << cnt-1;
    }
    else cout << "NO";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n, k;   cin >> n >> k;
    solve(n, k);
    return 0;
}
