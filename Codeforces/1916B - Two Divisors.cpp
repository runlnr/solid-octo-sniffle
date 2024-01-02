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

void solve(int a, int b) {
    ll small_a = a, small_b = a, concl;
    if(a == 1) {
        small_a = b;    small_b = b;
    }
    for(int i = 2; i <= sqrt(b); i++)
        if(b%i == 0) {
            small_b = i;    break;
        }
    for(int i = 2; i <= sqrt(a); i++)
        if(a%i == 0) {
            small_a = i;    break;
        }
    concl = min(small_a, small_b);
    cout << concl*b << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t, a, b;    cin >> t;
    while(t--) {
        cin >> a >> b;
        solve(a, b);
    }
    return 0;
}
