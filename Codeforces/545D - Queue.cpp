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
void solve(int n) {
    int cnt = 0, total = 0;
    vc.resize(n);
    for(int i = 0; i < n; i++) cin >> vc[i];
    sort(vc.begin(), vc.end());

    for(int i = 0; i < n; i++) {
        if(i == 0) {
            total = vc[i];  cnt++;
        }
        else {
            if(vc[i] < total) continue;

            total += vc[i];
            cnt++;
        }
    }

    cout << cnt << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n;  cin >> n;
    solve(n);
    return 0;
}
