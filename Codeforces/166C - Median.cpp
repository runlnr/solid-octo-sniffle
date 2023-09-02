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
map<int, bool> mp;
void solve(int n, int k) {
    vector<int> vc;
    bool app = 0, flag = 0;
    int ans = 0, p;

    for(int i = 0; i < n; i++) {
        cin >> p;
        vc.pback(p);
        if(p == k) app = true;
    }
    if(!app) {
        vc.pback(k);
        n++;    ans++;
    }
    sort(vc.begin(), vc.end());

    int pos = (n+1)/2;
    if(vc[pos] > k) flag = 1;
    while(vc[(n+1)/2-1] != k && flag) {
        vc.insert(vc.begin()+0, 1);
        n++;    ans++;
    }
    while(vc[(n+1)/2-1] != k && !flag) {
        vc.pback(1);
        n++;    ans++;
    }
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n, k;   cin >> n >> k;
    solve(n, k);
    return 0;
}
