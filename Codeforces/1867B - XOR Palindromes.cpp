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
void solve(int n) {
    vector<char> vc(n), after(n+1);
    bool flag = 0;
    int maxn = 0, minn = 0;

    if(n%2) {flag = true;  maxn++;}

    for(int i = 0; i < (n+1)/2; i++) cin >> vc[i];

    for(int i = (n+1)/2; i < n; i++) {
        cin >> vc[i];
        if(vc[i] == vc[n-i-1]) maxn += 2;
        else if(vc[i] != vc[n-i-1]) {
            maxn++;     minn++;
        }
    }

    for(int i = 0; i < minn; i++) after[i] = '0';
    for(int i = minn; i < maxn;) {
        if(flag) {
            after[i] = '1';   i++;
        }
        else {
            after[i] = '1';   i++;
            after[i] = '0';   i++;
        }
    }
    after[maxn] = '1';
    for(int i = maxn+1; i <= n; i++) after[i] = '0';

    for(auto i : after) cout << i;
        cout << endl;


}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t, n;   cin >> t;
    while(t--) {
        cin >> n;
        solve(n);
    }
    return 0;
}
