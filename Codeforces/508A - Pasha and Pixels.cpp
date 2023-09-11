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
bool ar[1005][1005];
bool check(int i, int j) {
    if(ar[i-1][j]) {
        if(ar[i-1][j-1])
            if(ar[i][j-1]) return 1;

        if(ar[i-1][j+1])
            if(ar[i][j+1]) return 1;
    }
    if(ar[i+1][j]) {
        if(ar[i+1][j-1])
            if(ar[i][j-1]) return 1;

        if(ar[i+1][j+1])
            if(ar[i][j+1]) return 1;
    }
    return 0;
}
void solve(int n, int m, int k) {
    int a, b, ans = 0;
    bool flag = 1;

    for(int i = 0; i < k; i++) {
        cin >> a >> b;
        if(flag) {
            ar[a][b] = true;
            if(check(a, b)) {ans = i+1;     flag = false;}
        }
    }
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n, m, k;    cin >> n >> m >> k;
    solve(n, m, k);
    return 0;
}
