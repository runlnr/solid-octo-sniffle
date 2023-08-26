#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back
#define dst distance

using namespace std;
typedef long long ll;   typedef string str;

const int MOD = 1e9+7, N = 1e5+7, J = 1e3+7;
//chetmeorroiroiorr

int calc(int a, int b) {
    if(b==0) return 1;
    int x = calc(a, b/2);
    if(b%2 == 0) return x*x*1;
    else return x*x*a;
}
void solve(int n, int k) {
    k = min(k, 30);
    int ans = min(calc(2, k), n+1);
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t;  cin >> t;
    int n, k, q;
    while(t--) {
        cin >> n >> k;      solve(n, k);
    }
    return 0;
}
