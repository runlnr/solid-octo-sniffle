#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back

using namespace std;
typedef long long ll;   typedef string str;
//chetmeorroiroiorr

void solve(ll n) {
	vector<int> a(n), b(n);
	for (auto &it : a) cin >> it;
	for (auto &it : b) cin >> it;
	vector<int> vc(n);

	for (int i = 0; i < n; ++i) {
		vc[i] = a[i] - b[i];
	}
	sort(vc.begin(), vc.end());

	long long ans = 0;
	for (int i = 0; i < n; ++i) {
		if (vc[i] <= 0) continue;
		int pos = lower_bound(vc.begin(), vc.end(), -vc[i] + 1) - vc.begin();
		ans += i - pos;
	}

	cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);
    ll t;  cin >> t;
    solve(t);
    return 0;
}
