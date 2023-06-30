#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back

using namespace std;
typedef long long ll;   typedef string str;
//chetmeorroiroiorr
void solve(int t) {
    while(t--) {
        int n;  cin >> n;
        map<bool, bool> mp;
        vector<int> vc, sorted;

        for(int i = 0; i < n; i++) {
            int p;  cin >> p;   vc.pback(p);
            sorted.pback(p);
        }
        sort(sorted.begin(), sorted.end());

        for(int i = 0; i < n; i++) {
            bool flg;   cin >> flg;
            mp[flg] = 1;
        }

        bool qmark = 1;
        for(int i = 0; i < n; i++) {
            if(vc[i] != sorted[i]) qmark = 0;
        }

        if(qmark) {cout << "Yes" << endl;}
        else {
            if(mp[0] == 1 && mp[1] == 1) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);
    int t;  cin >> t;
    solve(t);
    return 0;
}
