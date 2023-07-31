
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
void solve(int n, int m) {
    vector<int> city(n), cell(m);

    for(int i = 0; i < n; i++) cin >> city[i];
    for(int i = 0; i < m; i++) cin >> cell[i];
    sort(city.begin(), city.end());
    sort(cell.begin(), cell.end());

    int j = 0, ans = 0, temp = 0, diff_cell = 0;
    for(int i = 0; i < n; i++) {
        while(abs(cell[j+1] - city[i]) <= abs(cell[j] - city[i]) && j < m-1) {
            j++;
        }
        temp = abs(city[i] - cell[j]);
        ans = max(ans, temp);
    }
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n, m;   cin >> n >> m;
    solve(n, m);
    return 0;
}

