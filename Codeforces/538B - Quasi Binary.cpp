#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back
#define dst distance

using namespace std;
typedef long long ll;   typedef string str;
typedef long double ld;
const int MOD = 1e9+7, N = 1e5+7, J = 1e3+7;
//chetmeorroiroiorr
vector<int> vc(1000);
int maxsz = INT_MIN;
void brkdwn(int n) {
    int p, val = 1;
    while(n > 0) {
        p = n%10;
        maxsz = max(maxsz, p);
        for(int i = 0; i < p; i++)  vc[i]+=val;
        val*=10;    n/=10;
    }
}
void solve(int n) {
    brkdwn(n);
    cout << maxsz << endl;
    for(int i = 0; i < maxsz; i++)
        cout << vc[i] << sp;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n;  cin >> n;
    solve(n);
    return 0;
}
