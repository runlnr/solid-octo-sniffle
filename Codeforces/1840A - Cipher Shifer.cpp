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
vector<int> vc;
void solve(str s) {
    str after;
    char temp = '0';
    for(int i = 0; i < s.size(); i++) {
        if(temp == '0') temp = s[i];
        else {
            if(s[i] == temp) {
                after += s[i];  temp = '0';
            }
        }
    }
    cout << after << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t, n;  cin >> t;
    str s;
    while(t--) {
        cin >> n;
        cin >> s;   solve(s);
    }
    return 0;
}
