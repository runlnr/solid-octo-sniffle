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
char ar[200], p[200];
void solve(int n, int k) {
    str s;  cin >> s;
    for(int i = 'a'; i <= 'z'; i++) ar[i] = i;

    char a, b;
    while(k--) {
        cin >> a >> b;
        swap(ar[a], ar[b]);
    }

    for(int i = 'a'; i <= 'z'; i++) p[ar[i]] = i;
    for(int i = 0; i < s.size(); i++) cout << p[s[i]];
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n, k;   cin >> n >> k;
    solve(n, k);
    return 0;
}
