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
bool solve(int n, int k) {
    vector<int> vc(n);
    map<int, bool> mp;
    int flag = 0;

    for(int i = 0; i < n; i++) {
        cin >> vc[i];
        mp[vc[i]] = 1;
    }
    if(mp.size() == 1) flag = 1;

    int first = 0, last = 0, idxf = INT_MAX, idxl = -999;
    for(int i = 0; i < n; i++) {
        if(vc[i] == vc[0]) {
            first++;
            if(first % k == 0 && first != 0) {idxf = i; break;}
        }
    }
    if(first < k) return 0;
    else if(vc[0] == vc[n-1]) return 1;

    for(int i = n-1; i >= idxf; i--) {
        if(vc[i] == vc[n-1]) {
            last++;
            if(last % k == 0 && last != 0) {idxl = i;    break;}
        }
    }

    if(last >= k) return 1;
    return 0;

}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t;  cin >> t;
    int n, k;
    while(t--) {
        cin >> n >> k;
        bool flag = solve(n, k);
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
 
