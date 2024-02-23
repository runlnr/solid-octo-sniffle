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
    int first = 0, second = 0;
    char fir, sec, thr;

    if(n <= 53) first = 1;
    else if(n > 53) first = n-52;
    n -= first;

    if(n <= 27) second = 1;
    else if(n > 27) second = n-26;
    n -= second;

    fir = 'a'+first-1;
    sec = 'a'+second-1;
    thr = 'a'+n-1;
    cout << fir << sec << thr;
    cout << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t, n;   cin >> t;
    while(t--) {
        cin >> n;
        solve(n);
    }
}
