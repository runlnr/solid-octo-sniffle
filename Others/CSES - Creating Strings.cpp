#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back
#define dst distance

using namespace std;
typedef long long ll;   typedef string str;

const int MOD = 1e9+7, N = 1e5+7, J = 1e3+7;
//chetmeorroiroiorr
map<int, int> mp;
vector<string> ans;
str s;  int idx = 0;
void rec(const string &k = "") {
    if(k.size() == s.size()) {ans.pback(k); return;}

    for(int i = 0; i < 26; i++) {
        if(mp[i] >= 1) {
            mp[i]--;
            rec(k + (char)(i+'a'));
            mp[i]++;
        }
    }
}
void solve(str s) {
    for(int i = 0; i < s.size(); i++) mp[s[i]-'a']++;
    rec();

    cout << ans.size() << endl;
    for(auto strg : ans) cout << strg << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    cin >> s;
    solve(s);
    return 0;
}
