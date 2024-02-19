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
void solve(int n, int m, int k) {
    vector<int> ppl(n), aptmt(m);

    for(int i = 0; i < n; i++) cin >> ppl[i];
    for(int i = 0; i < m; i++) cin >> aptmt[i];

    sort(aptmt.begin(), aptmt.end(), greater<int>());
    sort(ppl.begin(), ppl.end(), greater<int>());

    int i = 0, j = 0, ans = 0;
    while(i < n) {
        if(j >= m) break;
        ll maxn = aptmt[j]+k, minn = aptmt[j]-k;
        if(ppl[i] <= maxn && ppl[i] >= minn) {
            ans++;  i++;    j++;
        }
        else if(ppl[i] > maxn) i++;
        else if(ppl[i] < minn) j++;
    }
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n, m, k;    
    cin >> n >> m >> k;
    solve(n, m, k);
}


