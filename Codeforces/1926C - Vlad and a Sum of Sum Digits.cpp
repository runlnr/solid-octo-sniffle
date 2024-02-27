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
int ar[200010];
void solve(int n) {
    cout << ar[n] << endl;
}
int pt(int x) {
    int ans = 0;
    while(x) {
        ans += (x%10);
        x /= 10;
    }
    return ans;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    ar[0] = 0;
    int t;  cin >> t;
    for(int i = 1; i < 200002; i++) {
        ar[i] = ar[i-1]+pt(i);
    }
    while(t--) {
        int n;  cin >> n;
        solve(n);
    }
}
