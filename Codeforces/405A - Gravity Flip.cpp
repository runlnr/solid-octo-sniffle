#include <bits/stdc++.h>
#define endl "\n"
#define sp ' '

using namespace std;
typedef string str;     typedef long long ll;
void solve(ll n) {
    int ar[n+10];
    for(int i = 1; i <= n; i++)
        cin >> ar[i];
    sort(ar+1, ar+n+1);
    for(int i =1; i <= n; i++)
        cout << ar[i] << sp;
}
int main() {
	//freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);
    ll t;   cin >> t;
    solve(t);
    return 0;
}
