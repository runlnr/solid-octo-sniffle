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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    str s, after;  cin >> s;
    bool flag = 0;
    for(int i = 0; i < s.size(); i++) {
        if(flag) {
            after = s.substr(i, s.size()-i);
            cout << after << endl;
            break;
        }
        else {
            if(s[i] - '0' == 0) flag = true;
            else if(i < s.size()-1)
                cout << s[i];
        }
    }
    return 0;
}
