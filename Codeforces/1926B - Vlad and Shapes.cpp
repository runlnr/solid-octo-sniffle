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
char ar[200][200];
void solve(int n) {
    memset(ar, 0, sizeof(ar));
    bool flag = 0;
    int firstrow = 0, total1 = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) {
            cin >> ar[i][j];
            if(ar[i][j] == '1') total1++;
        }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(ar[i][j] == '1' && !flag) {
                firstrow++;
                if(ar[i][j+1] != '1') flag = 1;
            }
        }
    }

    if(firstrow*firstrow == total1) cout << "SQUARE";
    else cout << "TRIANGLE";
    cout << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t;  cin >> t;
    while(t--) {
        int n;  cin >> n;
        solve(n);
    }
}
