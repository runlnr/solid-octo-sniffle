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
void solve(int n) {
    vector<int> vc(n);
    int minn = INT_MAX, cntr = 1;
    for(int i = 0; i < n; i++) {
        cin >> vc[i];
        if(vc[i] < minn) {
            minn = vc[i];   cntr = 1;
        }
        else if(vc[i] == minn) cntr++;
    }
    if(cntr == vc.size()) cout << -1 << endl;
    else {
        cout << cntr << sp << vc.size()-cntr << endl;
        for(int i = 0; i < cntr; i++) cout << minn << sp;
            cout << endl;
        for(int i = 0; i < vc.size(); i++)
            if(vc[i] != minn) cout << vc[i] << sp;
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t;  cin >> t;
    while(t--) {
        int n;  cin >> n;
        solve(n);
    }
    return 0;
}
