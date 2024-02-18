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
void solve(int a, int b) {
    int maxnum = max(a, b), minnum = min(a, b);
    minnum -= (maxnum-minnum);
    maxnum -= (maxnum-minnum);
    if(maxnum == minnum && minnum >= 0 && maxnum >= 0) {
        if(maxnum%3 == 0) cout << "YES";
        else cout << "NO";
    }
    else cout << "NO";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t, a, b;    cin >> t;
    while(t--) {
        cin >> a >> b;
        solve(a, b);
        cout << endl;
    }
}
