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
    vector<int> vc(2);
    int j = 0, sz = b.size(), orgsz = b.size();
    bool ltor = false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != '|') vc[j]++;
        else if(a[i] == '|') j++;
    }
    sz -= min(sz, abs(vc[0]-vc[1]));
    if(vc[0] < vc[1]) vc[0] += min(orgsz, abs(vc[1]-vc[0]));
    else if(vc[0] > vc[1]) {
        ltor = true;
        vc[1] += min(orgsz, abs(vc[1]-vc[0]));
    }
    if(vc[0] != vc[1]) cout << "Impossible";
    else if(vc[0] == vc[1]){
        if(sz%2 == 0) {
            if(ltor) {
                for(int i = 0; i < sz/2; i++)
                    cout << b[i];
                cout << a;
                for(int i = sz/2; i < b.size(); i++)
                    cout << b[i];
            }
            else {
                for(int i = sz/2; i < b.size(); i++)
                    cout << b[i];
                cout << a;
                for(int i = 0; i < sz/2; i++)
                    cout << b[i];
            }
        }
        else cout << "Impossible";
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    str a, b;   cin >> a >> b;
    solve(a, b);
    return 0;
}
