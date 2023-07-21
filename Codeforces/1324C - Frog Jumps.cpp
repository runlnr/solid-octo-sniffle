
#include <bits/stdc++.h>
#define ss second
#define ff first
#define AR 1e5+7
#define MOD 1e9+7
#define endl "\n"
#define sp ' '
#define pback push_back

using namespace std;
typedef long long ll;   typedef string str;
//chetmeorroiroiorr
void solve(str s) {
    int ans = 0, temp = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'L') temp++;
        else if(s[i] == 'R') {
            ans = max(ans, temp);   temp = 0;
        }
    }
    if(temp != 0) ans = max(ans, temp);
    cout << ans+1 << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t;  cin >> t;
    str s;
    while(t--) {
        cin >> s;   solve(s);
    }
    return 0;
}

