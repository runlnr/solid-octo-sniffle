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
void solve(int n, int x) {
    vector<int> vc(n);
    int temp = 1, ans = 0;

    for(int i = 0; i < n; i++) cin >> vc[i];
    sort(vc.begin(), vc.end(), greater<int>());

    for(int i = 0; i < n; i++) {
        if(temp*vc[i] >= x) {
            ans++;  temp = 1;
        }
        else temp++;
    }

    cout << ans;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t, n, x;   cin >> t;
    while(t--) {
        cin >> n >> x;   solve(n, x);
        cout << endl;
    }
}
