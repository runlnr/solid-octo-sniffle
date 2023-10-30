#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back
#define dst distance

using namespace std;
typedef long long ll;   typedef string str;
typedef unsigned long long ull;

const int MOD = 1e9+7, N = 1e5+7, J = 1e3+7;
void solve(int n) {
    map<int, int> mp;
    vector<int> vc;

    int cnt = 0, p;
    bool flag = 1;
    for(int i = 0; i < n; i++) {
        cin >> p;
        if(mp[p] == 0) {
            mp[p]++;
            cnt++;  vc.pback(p);}
        mp[p]++;
    }

    if(cnt > 2) flag = 0;
    else if(cnt == 2) {
        int temp = abs(mp[vc[0]] - mp[vc[1]]);
        if(temp >= 2) flag = 0;
    }

    if(!flag) cout << "No";
    else cout << "Yes";

}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t, n, k;  cin >> t;
    while(t--) {
        cin >> n;
        solve(n);   cout << endl;
    }
}
