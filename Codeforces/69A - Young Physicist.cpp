
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
ll ar[J][J];
bool col(int n) {
    for(int i = 1; i <= 3; i++) {
        int sum = 0;
        for(int j = 1; j <= n; j++) sum += ar[j][i];
        if(sum != 0) return 0;
    }
    return 1;
}
bool row(int n) {
    for(int i = 1; i <= n; i++) {
        int sum = 0;
        for(int j = 1; j <= 3; j++) sum += ar[i][j];
        if(sum != 0) return 0;
    }
    return 1;
}
void solve(int n) {
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= 3; j++)
            cin >> ar[i][j];

    if(row(n) || col(n)) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n;  cin >> n;
    solve(n);
    return 0;
}

