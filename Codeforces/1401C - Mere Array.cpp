
#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back

using namespace std;
typedef long long ll;   typedef string str;
const ll MOD = 1e9+7, N = 1e5+7, J = 1e3+7;
//chetmeorroiroiorr
ll dp[N];
int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a%b);
}
bool type(int a, int b, int n) {
    if(a % n == 0 && b % n == 0) return 1;
    if(a % n != 0 && b % n != 0) {
        if(a == b) return 1;
        else return 0;
    }
    return 0;
}
void solve(int n) {
    vector<int> vc(n), sorted(n);
    int minn = INT_MAX;
    bool flag = 1;

    for(int i = 0; i < n; i++) {
        cin >> vc[i];
        sorted[i] = vc[i];
        minn = min(minn, vc[i]);
    }
    sort(sorted.begin(), sorted.end());

    for(int i = 0; flag && i < n; i++) {
        flag = type(vc[i], sorted[i], minn);
    }

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;

}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t, n;  cin >> t;
    while(t--) {
        cin >> n;   solve(n);
    }
    return 0;
}

