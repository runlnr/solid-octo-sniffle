#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back
#define dst distance

using namespace std;
typedef long long ll;   typedef string str;
typedef unsigned long long ull;

const int MOD = 1e9+7, N = 1e5+7, J = 1e3+7;
bool check(str s) {
    for(int i = 1; i < s.size(); i++)
        if(s[i] == s[i-1]) return 0;
    return 1;
}
void solve(int n, int k) {
    str a, b;
    cin >> a >> b;

    bool flag = 1, able = 1;
    if(!check(a)) flag = 0;
    if(!check(b)) able = 0;

    if(!flag && !able) cout << "No";
    else if(flag) cout << "Yes";
    else if(able && !flag) {
        str p;      bool pop = 1;
        p += b[0];
        if(b[0] == b[k-1]) p += b[1];
        p += b[k-1];

        for(int i = 1; i < a.size(); i++) {
            if(a[i] == a[i-1]) {
                str ty;
                ty += a[i];   ty += p;  ty += a[i-1];
                if(!check(ty)) pop = false;
            }
        }

        if(!pop) cout << "No";
        else cout << "Yes";
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t, n, k;  cin >> t;
    while(t--) {
        cin >> n >> k;
        solve(n, k);
        cout << endl;
    }
}
