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
vector<int> vc[N];
void solve(str s) {
    s = '0'+s;
    int p = s.size();
    for(int i = s.size()-1; i >= 0; i--) {
        if(s[i] >= '5') {
            s[i-1]++;
            p = i;
        }
    }
    for(int i = (s[0] == '0'); i < s.size(); i++) {
        cout << (i >= p? '0' : s[i]);
    }
    cout << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t;  cin >> t;
    while(t--) {
        str s;  cin >> s;
        solve(s);
    }
    return 0;
}
