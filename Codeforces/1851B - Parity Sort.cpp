#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back

using namespace std;
typedef long long ll;   typedef string str;
//chetmeorroiroiorr
const ll MOD = 1e9+7;
bool type(int a, int b) {
    a %= 2;     b %= 2;
    return a == b;
}
void solve(int n) {
    vector<int> vc(n), sorted(n);
    bool flag = true;

    for(int i = 0; i < n; i++) {
        int p;     cin >> p;
        vc[i] = p;      sorted[i] = p;
    }
    sort(sorted.begin(), sorted.end());

    for(int i = 0; i < n; i++) {
        if(!type(vc[i], sorted[i])) {
            flag = false;   break;
        }
    }
    if(!flag) cout << "NO" << endl;
    else cout << "YES" << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t;  cin >> t;
    int n;
    while(t--) {
        cin >> n;   solve(n);
    }
    return 0;
}
 
