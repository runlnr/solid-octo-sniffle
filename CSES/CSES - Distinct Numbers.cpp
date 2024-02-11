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

    int n, p, ans = 0;   
    cin >> n;
    map<int, bool> mp;

    for(int i = 0; i < n; i++) {
        cin >> p;
        if(!mp[p]) {ans++;  mp[p] = 1;}
    }
    cout << ans << endl;
    return 0;
}
