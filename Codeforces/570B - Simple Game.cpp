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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n, m;   cin >> n >> m;
    ll back = m-1, forw = m+1;
    
    if(n == 1) cout << 1;
    else if(forw > n) cout << back;
    else {
        if(m-1 >= n-m) cout << back;
        else cout << forw;
    }
    return 0;
}
