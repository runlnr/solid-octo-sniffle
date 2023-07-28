
#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back

using namespace std;
typedef long long ll;   typedef string str;
const ll MOD = 1e9+7, N = 1e5+7, J = 1e3+7;
//chetmeorroiroiorr
void solve(int n) {
    if(n % 2 == 1) {
        n--;
        cout << 1 << sp << n/2 << sp << n/2 << endl;
    }
    else {
        if(n % 4 != 0)
            cout << n/2-1 << sp << n/2-1 << sp << 2 << endl;
        else if(n % 4 == 0)
            cout << n/2 << sp << n/4 << sp << n/4 << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t, n, k;    cin >> t;
    while(t--) {
        cin >> n >> k;  solve(n);
    }
    return 0;
}

