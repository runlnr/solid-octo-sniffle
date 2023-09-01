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
int bsr(int x, int i) {
    int l = 0, r = vc.size()-1;
    while(l <= r) {
        int mid = l+(r-l)/2;
        if(vc[mid] <= x) l = mid+1;
        else r = mid-1;
    }
    return l-1;
}
void solve(int n) {
    int idx = n-1, ans = 0;
    for(int i = n-1; i >= (n+1)/2; i--) {
        int target = vc[i]/2, pos = 0;

        if(i == n-1) {
            idx = bsr(target, i);
            if(idx >= 0) ans++;
            idx--;
        }
        else {
            pos = bsr(target, i);
            idx = min(pos, idx);
            if(idx >= 0) ans++;
            idx--;
            if(idx < 0) break;
        }
    }
    cout << n-ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n;  cin >> n;
    vc.resize(n);

    for(int i = 0; i < n; i++) cin >> vc[i];
    sort(vc.begin(), vc.end());
    solve(n);
    return 0;
}
