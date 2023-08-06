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
ll dp[N];
void solve(str s) {
    ll counter = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'Q') for(int A = i+1; A < s.size(); A++) {
                if(s[A] == 'A') for(int q = A+1; q < s.size(); q++) {
                        if(s[q] == 'Q') counter++;
                }
        }
    }
    cout << counter << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    str s;  cin >> s;
    solve(s);
    return 0;
}
