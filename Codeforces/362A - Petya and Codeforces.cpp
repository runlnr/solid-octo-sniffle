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

void solve(int n, int k) {
    vector<int> vc(k);

    bool flag = true;
    for(int i = 0; i < k; i++) cin >> vc[i];
    sort(vc.begin(), vc.end());

    if(k > 0) if(vc[0] == 1 || vc[k-1] == n) flag = false;
    for(int i = 1; i < k-1; i++) {
        if(abs(vc[i]-vc[i-1]) == 1 && abs(vc[i]-vc[i+1]) == 1)
            flag = false;
    }

    flag == true? cout << "YES" : cout << "NO";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n, k;   cin >> n >> k;
    solve(n, k);
    return 0;
}
