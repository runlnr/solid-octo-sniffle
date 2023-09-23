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
double mul4(double x) {
    return x*x*x*x;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    long double n;   cin >> n;
    long double l = 0, r = 1, temp;
    while(mul4(r) < n-r) r *= 10;
    r *= 10;

    for(int i = 0; i <= 300000; i++) {
        long double mid = l+(r-l)/2;
        temp = n-mid;

        if(mul4(mid) <= temp) l = mid;
        else r = mid;
    }
    long double ans = l*l;
    cout << fixed << ans << setprecision(100);
}
