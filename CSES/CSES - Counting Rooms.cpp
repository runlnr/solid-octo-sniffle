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
char ar[1010][1010];
void del(int i, int j) {
    ar[i][j] = '#';
    if(ar[i+1][j] == '.') del(i+1, j);
    if(ar[i-1][j] == '.') del(i-1, j);
    if(ar[i][j+1] == '.') del(i, j+1);
    if(ar[i][j-1] == '.') del(i, j-1);
}
void solve(int n, int m) {
    int rooms = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) cin >> ar[i][j];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) {
            if(ar[i][j] == '.') {
                rooms++;
                del(i, j);
            }
        }
    cout << rooms;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int a, b;   cin >> a >> b;
    solve(a, b);
    return 0;
}

