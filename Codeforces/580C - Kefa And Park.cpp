#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back

using namespace std;
typedef long long ll;   typedef string str;
const int N = 1e5+7;
//chetmeorroiroiorr
int status[N];
bool vis[N];
vector<int> ar[N];
int a, b, n, m, ans = 0;

bool isLeaf(int parent) {
	for(auto i : ar[parent]) {
		if(!vis[i]) return false;
	}
	return true;
}

void dfs(int parent) {
	vis[parent] = true;

	if(status[parent] > m) return;
	if(isLeaf(parent) && status[parent] <= m) ans++;
	for(auto i : ar[parent]) {
		if(!vis[i]) {
			if(status[i]) status[i] += status[parent];
			dfs(i);
		}
	}

	return;
}

void solve(int n, int m) {
	memset(vis, false, sizeof(vis));
	for(int i = 0; i < n; i++) cin >> status[i];

	for(int i = 0; i < n-1; i++) {
		cin >> a >> b;
		a--;	b--;
		ar[a].pback(b);
		ar[b].pback(a);
	}
	ans = 0;
	dfs(0);
	cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

	cin >> n >> m;
    solve(n, m);
    return 0;

}

