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
void solve(str s) {
    ll maxlen = 1, cur = 1;
    for(int i = 1; i < s.size(); i++) {
        if(s[i] == s[i-1]) cur++;
        else {
            maxlen = max(maxlen, cur);
            cur = 1;
        }
    }
    maxlen = max(maxlen, cur);
    cout << maxlen << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    str s;  cin >> s;
    solve(s);
    return 0;
}
