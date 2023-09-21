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
vector<int> vc;

const int MOD = 1e9+7, N = 1e5+7, J = 1e3+7;

void solve(int n) {
    map<int, int> mp;

    int p;  bool flag = 0;
    for(int i = 0; i < n; i++) {
        cin >> p;
        mp[p%10]++;
    }

    for(int i = 0; i < 10; i++) {
        mp[i]--;
        if(mp[i] >= 0) {

        for(int j = 0; j < 10; j++) {
            mp[j]--;
            if(mp[j] >= 0) {

            for(int k = 0; k < 10; k++) {
                mp[k]--;
                if(mp[k] >= 0) {

                int temp = k+i+j;
                if(temp % 10 == 3) {flag = true;    break;}
            }

                mp[k]++;
            }
        }
            mp[j]++;
        }
    }
        mp[i]++;
    }

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t, n;  cin >> t;
    while(t--) {
        cin >> n;
        solve(n);
    }
}
