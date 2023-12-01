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
int bsr(int x) {

}
void solve(int a, int b) {
    int c = b, orga, orgb, ans = 0;
    b = min(a, b);     a = max(a, c);
    orga = a;   orgb = b;

    bool plan2 = false;

    if(a != b) {
        int temp = a-b;
        a -= (temp*2);      b -= temp;
        ans += temp;

        if(a < 0 || b < 0) {
            a = orga;   b = orgb;
            ans = 0;
            plan2 = true;
        }
    }

    if(plan2) ans = b;
    else {
        if(b%3 == 0 || b%3 == 1) ans += b/3*2;
        else if(b%3 == 2) ans += b/3*2+1;
    }
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int a, b;   cin >> a >> b;
    solve(a, b);
    return 0;
}
