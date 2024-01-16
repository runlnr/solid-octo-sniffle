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
    if(n == 1) cout << 1;
    else if(n == 2 || n == 3) cout << "NO SOLUTION";
    else {
        bool flag1 = false, flag2 = false;
        int half = (n+1)/2, stop;
        stop = half;

        while(true) {
            cout << half << sp;
            half--;
            if(half == 0) flag1 = true;
            if(flag1 && flag2) break;

            cout << n << sp;
            n--;
            if(n == stop) flag2 = true;

            if(flag1 && flag2) break;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n;  cin >> n;
    solve(n);
    return 0;
}
