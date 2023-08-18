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
bool vis[N];
map<int, int> mp;
void solve(str s) {
    str after;
    bool nah = 0, ok = 0, flag = 1;
    if(s[0] == '(' && s[1] == ')' && s.size()==2)  cout << "NO" << endl;
    else {
        cout << "YES" << endl;
        for(int i = 0; i < s.size(); i++)
            after = after + '(' + ')';

        for(int i = 0; i < after.size(); i++) {
            if(after[i] == s[0]) {
                int idx = i;    flag = 1;
                for(int j = 0; j < s.size(); j++) {
                    if(s[j] != after[idx]) {
                        flag = 0;   break;
                    }
                    idx++;
                }
                if(flag) ok = 1;
            }
        }
        if(ok && !nah) {
            for(int i = 0; i < s.size(); i++)
                cout << '(';
            for(int i = 0; i < s.size(); i++)
                cout << ')';
            nah = 1;
            cout << endl;
        }

        if(!nah) cout << after << endl;
    }
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
