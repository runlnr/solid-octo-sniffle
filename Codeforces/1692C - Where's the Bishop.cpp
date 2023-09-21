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
vector<int> vc;

const int MOD = 1e9+7, N = 1e5+7, J = 1e3+7;
int ar[100][100];
void solve() {
    memset(ar, 0, sizeof(ar));

    char temp;
    int x = 0, y = 0;
    for(int i = 0; i < 8; i++)
        for(int j = 0; j < 8; j++) {
            cin >> temp;
            if(temp == '#') ar[i][j] = 1;
        }

    for(int i = 1; i < 7; i++) {
        for(int j = 1; j < 7; j++) {
            if(ar[i][j] == 1) {
                bool flag = 1;
                if(ar[i-1][j-1] == 0) flag = 0;
                if(ar[i+1][j-1] == 0) flag = 0;
                if(ar[i-1][j+1] == 0) flag = 0;
                if(ar[i+1][j+1] == 0) flag = 0;

                if(flag) {
                    x = i+1;    y = j+1;
                    break;
                }
            }
        }
    }

    cout << x << sp << y << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t;  cin >> t;
    while(t--) {
        solve();
    }
}
