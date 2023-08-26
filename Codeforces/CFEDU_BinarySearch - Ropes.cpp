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
int n, k;
double ans = 0;
vector<int> vc;
bool calc(double mid) {
    if(mid == 0) return 1;
    int ans = 0;
    for(int i = 0; i < n; i++) ans += floor(vc[i]/mid);
        return ans >= k;
}
void bsr() {
    double l = 0, r = 1e8;

    for(int i = 0; i < 100; i++) {
        double mid = (r+l)/2;
        if(calc(mid)) l = mid;
        else r = mid;
    }
    cout << setprecision(7) << l;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    cin >> n >> k;
    vc.resize(n);
    for(int i = 0; i < n; i++) cin >> vc[i];

    bsr();
    return 0;
}
