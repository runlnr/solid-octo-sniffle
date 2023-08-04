#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back

using namespace std;
typedef long long ll;   typedef string str;
const ll MOD = 1e9+7, N = 1e5+7, J = 1e3+7;
//chetmeorroiroiorr

void solve(int n) {
    vector<char> a(n), b(n);
    int temp = 0, temp_rev = 0, ans = 0;

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) {
        cin >> b[i];
        if(b[i] == a[i]) temp++;
    }
    temp = n-temp;

    for(int i = n-1; i >= 0; i--)
        if(b[i] == a[n-i-1]) temp_rev++;
    temp_rev = n - temp_rev;

    if(temp < temp_rev) {
        if(temp == 0) ans = 0;
        else {
            ans = temp+temp;
            if(temp%2 != 0) ans--;
        }
    }
    else if(temp > temp_rev ) {
        if(temp_rev == 0) ans = 2;
        else {
            ans = temp_rev+temp_rev;
            if(temp_rev%2 == 0) ans--;
        }
    }
    else if(temp == temp_rev) {
        if(temp == 0) ans = 0;
        else if(temp == 1) ans = 1;
        else ans = temp*2-1;
    }

    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t, n;  cin >> t;
    str a, b;
    while(t--) {
        cin >> n;   solve(n);
    }
    return 0;
}
