#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back

using namespace std;
typedef long long ll;   typedef string str;
//chetmeorroiroiorr

void solve(int t) {
    while(t--) {
        ll n, k, mimic;   cin >> n >> k;
        while(k > 1) {
            mimic = n;
            ll mindig = 9, maxdig = 0;
            while(mimic > 0) {
                ll let = mimic%10;
                maxdig = max(let, maxdig);
                mindig = min(let, mindig);
                mimic /= 10;
            }
            ll tm = maxdig*mindig;
            if(tm != 0) n += tm;
            else break;
            k--;
        }
        cout << n << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);
    int t;  cin >> t;
    solve(t);
    return 0;
}

