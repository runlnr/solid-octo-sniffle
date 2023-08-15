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
void solve(int n) {
    vector<int> vc(n+1);

    int m, a, b, temp;

    for(int i = 1; i <= n; i++) {
        if(i == 1) cin >> vc[i];
        else {cin >> temp;    vc[i] = temp+vc[i-1];}
    }
    cin >> m;
    while(m--) {
        cin >> a >> b;
        cout << (vc[b] - vc[a-1])/10 << endl;
    }

}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n;  cin >> n;
    solve(n);
    return 0;
}
