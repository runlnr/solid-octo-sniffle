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
int ar[N], after[N];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n;  cin >> n;
    for(int i = 1; i <= n; i++) cin >> ar[i];

    for(int i = 1; i <= n; i++) {
        int idx = ar[i];
        after[idx] = i;
    }
    for(int i = 1; i <= n; i++) cout << after[i] << sp;
    return 0;
}

