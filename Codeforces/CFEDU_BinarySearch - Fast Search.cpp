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
void solve(int n) {
    vector<int> vc(n);

    for(int i = 0; i < n; i++) cin >> vc[i];
    sort(vc.begin(), vc.end());

    int k, ans = 0, l, r;
    cin >> k;
    for(int i = 0; i < k; i++) {
        cin >> l >> r;
        int a = lower_bound(vc.begin(), vc.end(), l) - vc.begin();
        int b = upper_bound(vc.begin(), vc.end(), r) - vc.begin();

        cout << b-a << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n;  cin >> n;
    solve(n);
    return 0;
}
