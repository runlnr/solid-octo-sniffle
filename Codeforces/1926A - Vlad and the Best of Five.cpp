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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t;  cin >> t;
    while(t--) {
        str s;  cin >> s;
        int a = 0, b = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'A') a++;
            else b++;
        }

        if(a > b) cout << "A";
        else cout << "B";
        cout << endl;
    }
}
