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
bool vis[N];
bool check(int n) {
    for(int i = 0; i < n; i++)
        if(!vis[i]) return 0;
    return 1;
}
void solve(int n) {
    vector<int> vc(n);
    int p, ans = 0;

    for(int i = 0; i < n; i++) cin >> vc[i];
    sort(vc.begin(), vc.end());

    for(int i = 0; i < n; i++) if(!vis[i]) {
        int temp = 0;
        for(int j = i; j < n; j++)
            if(!vis[j] && vc[j] >= temp) {temp++;   vis[j] = true;}
        ans++;
    }
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n;  cin >> n;
    solve(n);
    return 0;
}
