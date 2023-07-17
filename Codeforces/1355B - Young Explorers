#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back

using namespace std;
typedef long long ll;   typedef string str;
//chetmeorroiroiorr
void solve(int n) {
	map<int, int> mp;
	int ans = 0, remain = 0, idx = 0;

	for(int i = 1; i <= n; i++) {
		int p;	cin >> p;	mp[p]++;
	}

	for(auto i : mp) {
		ans += (i.ss / i.ff);
		remain += (i.ss % i.ff);

		if(remain != 0 && remain >= i.ff) {
			ans++;		remain -= i.ff;
		}
	}
	cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);
    int t, n;	cin >> t;
    while(t--) {
        cin >> n;   solve(n);
    }

    return 0;
}

