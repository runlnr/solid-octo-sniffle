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

void solve(int n) {
    vector<int> b(n), a(n);
    vector<int> vc;

    int maxn = INT_MIN, p;

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    for(int i = 0; i < n; i++) {
        int temp = a[i]-b[i];
        if(temp < maxn) continue;
        else if(temp > maxn) {
            vc.clear();     vc.pback(i);
            maxn = temp;
        }
        else if(temp == maxn) vc.pback(i);
    }

    cout << vc.size() << endl;
    for(auto i : vc) cout << i+1 << sp;
    cout << endl;
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
