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
bool ar[51][51];
vector<pair<int, int>> a, b;

bool chk(int i, int j) {
    return i <= 50 && j <= 50 && i >= 0 && j >= 0;
}
void run(int i, int j, vector<pair<int, int>> &pa) {
    ar[i][j] = 1;
    pa.pback({i, j});

    if(ar[i+1][j] == 0 && chk(i+1, j))
        run(i+1, j, pa);
    if(ar[i-1][j] == 0 && chk(i-1, j))
        run(i-1, j, pa);

    if(ar[i][j+1] == 0 && chk(i, j+1))
        run(i, j+1, pa);
    if(ar[i][j-1] == 0 && chk(i, j-1))
        run(i, j-1, pa);
}

ll bp(int x) {
    if(x > 0) x*= -1;
    return x*x;
}

void solve(int n) {
    memset(ar, 1, sizeof(ar));
    int r1, c1, r2, c2, ans = INT_MAX;
    cin >> r1 >> c1 >> r2 >> c2;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++) {
            char p;     cin >> p;
            ar[i][j] = p-'0';
        }

    run(r1, c1, a);     run(r2, c2, b);

    for(auto i : a)     for(auto j : b) {
        int temp = bp(i.ff - j.ff) + bp(i.ss - j.ss);
        ans = min(ans, temp);
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
