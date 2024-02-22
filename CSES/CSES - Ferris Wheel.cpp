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
void solve(int n, int k) {
    vector<int> vc(n);

    for(int i = 0; i < n; i++) cin >> vc[i];
    sort(vc.begin(), vc.end());

    int i = 0, j = n-1;
    ll total = 0, ans = 0;
    while(i <= j) {
        total = vc[i]+vc[j];
        if(total > k) {
            j--;    ans++;
        }
        else {
            j--;    i++;    ans++;
        }
    }
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n, k;   cin >> n >> k;
    solve(n, k);
}


