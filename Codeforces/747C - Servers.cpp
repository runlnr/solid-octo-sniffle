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
int ar[101];
struct tasks {
    int time;
    int need;
    int sec;
};
void solve(int n, int k) {
    memset(ar, 0, sizeof(ar));
    int a, b, c, ans = 0, prev = 0;

    for(int p = 0; p < k; p++) {
        vector<int> temp_pos;
        cin >> a >> b >> c;
        int diff_time = a-prev, cnt = 0;

        for(int i = 1; i <= n; i++) {
            if(ar[i] > 0) {
                ar[i] -= diff_time;
                if(ar[i] <= 0) ar[i] = 0;
            }
            if(ar[i] == 0 && cnt < b) {
                ans += i;   ar[i] += c;
                cnt++;  temp_pos.pback(i);
            }
        }
        if(cnt == b) cout << ans << endl;
        else {
            cout << -1 << endl;
            for(auto i : temp_pos) ar[i] = 0;
        }

        prev = a;   ans = 0;
    }

}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n, k;   cin >> n >> k;
    solve(n, k);
    return 0;
}
