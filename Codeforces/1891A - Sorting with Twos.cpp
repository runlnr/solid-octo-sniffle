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

vector<int> vc;
void solve(int n) {
    vc.resize(n+1);
    bool flag = true;
    int p, tries = 1, temp;

    vc[0] = 0;
    for(int i = 0; i < n; i++) cin >> vc[i];

    for(int i = 1; i < n; i++) {
        temp = vc[i-1];

        if(i == tries) {
            temp = 0;   tries *= 2;
        }
        if(vc[i] < temp) flag = 0;
    }

    if(flag) cout << "YES";
    else cout << "NO";
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t, n;    cin >> t;
    while(t--) {
        cin >> n;   solve(n);
    }
    return 0;
}
