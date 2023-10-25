#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back
#define dst distance

using namespace std;
typedef long long ll;   typedef string str;
typedef unsigned long long ull;

const int MOD = 1e9+7, N = 1e5+7, J = 1e3+7;
int ar[107];
void me() {
    for(int i = 0; i <= 107; i++) ar[i] = -100000;
}
void solve(int n) {
    me();
    vector<int> vc(n), stat;

    int p, j = 0;
    for(auto &i : vc) cin >> i;
    for(int i = 0; i < n; i++) {
        cin >> p;

        if(p == 1) ar[i] = vc[i];
        else stat.pback(vc[i]);
    }

    sort(stat.begin(), stat.end(), greater<int>());
    for(int i = 0; i < n; i++) {
        if(ar[i] != -100000) {
            cout << ar[i];
        }
        else {
            cout << stat[j];    j++;
        }
        cout << sp;
    }
    cout << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t, n;  cin >> t;
    while(t--) {
        cin >> n;
        solve(n);
    }
}
