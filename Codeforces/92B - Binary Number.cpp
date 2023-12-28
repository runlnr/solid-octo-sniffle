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
    ll times = 0;
    s = '0' + s;
    while(s.size() > 2) {
        if(s[s.size()-1] == '0') s.erase(s.size()-1, 1);
        else if(s[s.size()-1] == '1') {
            s[s.size()-1] = '0';
            for(int i = s.size()-2; i >= 0; i--) {
                if(s[i] == '1') s[i] = '0';
                else {
                    s[i] = '1';     break;
                }
            }
        }
        times++;
    }
    if(s.size() > 1) {
        if(s[0] == '1') {
            if(s[1] == '0') times++;
            else if(s[1] == '1') times += 3;
        }
    }

    cout << times;

}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    str s;  cin >> s;
    solve(s);
    return 0;
}
