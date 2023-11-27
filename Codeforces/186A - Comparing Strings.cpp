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
void solve(str a, str b) {
    bool flag = true, met = false, tried = false, replica = false;
    map<char, int> mp;
    int posdiff = 0;
    if(a.size() != b.size()) flag = false;

    for(int i = 0; i < a.size(); i++) {
        mp[a[i]]++;
        if(mp[a[i]] > 1) replica = true;
        if(!met && a[i] != b[i]) {
            posdiff = i;   met = true;
        }
        else if(met && !tried && a[i] != b[i]) {
            if(a[posdiff] != b[i] || a[i] != b[posdiff])
                flag = false;
            tried = true;
        }
        else if(tried && a[i] != b[i]) flag = false;
    }

    if(!tried) flag = false;
    if(!met) {
        if(replica) flag = true;
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    str a, b;   cin >> a >> b;
    solve(a, b);
    return 0;
}
