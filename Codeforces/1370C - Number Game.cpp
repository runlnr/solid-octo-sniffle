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

const int MOD = 1e9+7, N = 1e5+7, J = 1e3+7;
bool checkprime(int x) {
    if(x == 1) return 0;
    if(x == 2 || x == 3) return 1;
    if(x%2 == 0 || x%3 == 0) return 0;

    for(int i = 5; i <= sqrt(x); i += 6)
        if(x%i == 0 || x % (i+2) == 0) return 0;
    return 1;
}
void solve(int n) {
    bool win = 0;

    if(n == 1) win = 1;
    if(n%2 == 0) {
        int cnt = 0;
        bool wrong = 0;
        if(checkprime(n/2) && n/2 >= 3) win = 1;
        while(n != 1) {
            cnt++;  n/=2;
            if(n %2 != 0 && n != 1) {wrong = 1;   break;}
        }
        if(cnt > 1 && !wrong) win = 1;
    }

    if(win) cout << "FastestFinger";
    else cout << "Ashishgup";

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
    return 0;
}
