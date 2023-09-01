#include <bits/stdc++.h>
#define endl "\n"
#define sp ' '
#define first ff
#define second ss

using namespace std;
typedef string str;     typedef long long ll;
int ar[1000010];
void solve(int n) {
    int idx = 1;    ar[0] = 0;
    for(int i = 1; i <= n; i++) {
        int p;  cin >> p;
        ar[i] = ar[i-1] + p;
    }
    int m;  cin >> m;
    while(m--) {
        int temp;   cin >> temp;
        int upper = upper_bound(ar+1, ar+n+1, temp) - ar;
        if(temp == ar[upper-1])
            upper -= 1;
        cout << upper << endl;
    }
}
int main() {
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);
    int n;  cin >> n;
    solve(n);
    return 0;
}
 
