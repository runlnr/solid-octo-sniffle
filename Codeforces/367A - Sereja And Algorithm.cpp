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
int ar[N][5];
str s;
void equ(int i, int ch) {
    ar[i][ch] = ar[i-1][ch];
}
void solve(int l, int r) {
    int top = 0, bottom = INT_MAX;
    for(int i = 1; i <= 3; i++) {
        int temp = ar[r][i] - ar[l-1][i];
        top = max(top, temp);
        bottom = min(bottom, temp);
    }
    if(abs(top-bottom) <= 1 || r-l <= 2) cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    str s;  cin >> s;
    int t, l, r;  cin >> t;

    for(int i = 1; i <= 3; i++) ar[0][i] = 0;
    for(int i = 1; i <= s.size(); i++) {
        if(s[i-1] == 'x') {
            ar[i][1] = ar[i-1][1]+1;
            equ(i, 2);  equ(i, 3);
        }
        else if(s[i-1] == 'y') {
            ar[i][2] = ar[i-1][2]+1;
            equ(i, 1);  equ(i, 3);
        }
        else if(s[i-1] == 'z') {
            ar[i][3] = ar[i-1][3]+1;
            equ(i, 1);  equ(i, 2);
        }
    }
    while(t--) {
        cin >> l >> r;
        solve(l, r);
    }
    return 0;
}
