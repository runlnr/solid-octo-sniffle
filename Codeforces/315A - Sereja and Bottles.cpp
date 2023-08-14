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
map<int, int> bott;
bool vis[N] = {0}, ectred[N] = {0};
void solve(int n) {
    int a, b, cnt = 0;
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        if(a != b) vis[b] = true;
        else if(a == b) {
            if(ectred[b]) vis[b] = true;
            else ectred[b] = true;
        }
        bott[a]++;
    }
    for(auto i : bott) if(!vis[i.ff]) {
        cnt += i.ss;
        if(ectred[i.ff] && i.ss > 1) cnt = cnt-i.ss+1;
    }

    cout << cnt << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n;  cin >> n;
    solve(n);
    return 0;
}
