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
vector<int> vc;
void solve(int n, int k) {
    vc.resize(n);

    for(int i = 0; i < n; i++)
        cin >> vc[i];

    int l = 0, ans = 0, wrongpos = 0;
    bool flag = 0;
    while(l < n-k) {
        if(!flag) {
            for(int i = l; i < l+k+1; i++) {
                if(i == l) continue;
                if(vc[i]*2 <= vc[i-1]) {flag = 1;   wrongpos = i;}
            }
        }

        if(flag == 1) {l = wrongpos;    flag = false;}
        else {
            ans++;
            int j = l+k+1;     l = j;
            while(l < n) {
                if(vc[l]*2 <= vc[l-1]) {flag = 0;   break;}
                ans++;      l++;
            }
        }
    }

    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t, n, k;  cin >> t;
    while(t--) {
        cin >> n >> k;
        solve(n, k);
    }
}
