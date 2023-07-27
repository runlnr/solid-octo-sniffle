
#include <bits/stdc++.h>
#define ss second
#define ff first
#define endl "\n"
#define sp ' '
#define pback push_back

using namespace std;
typedef long long ll;   typedef string str;
const ll MOD = 1e9+7, N = 1e5+7;
//chetmeorroiroiorr
ll n, k;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    cin >> n >> k;
    vector<pair<ll, ll>> vc;

    for(ll i = 0; i < n; i++) {
        ll p;  cin >> p;
        vc.pback(make_pair(p, i+1));
    }
    sort(vc.begin(), vc.end());

    ll i = 0, j = vc.size()-1;
    bool flag = 0;
    while(i < j) {
        ll temp = vc[i].ff + vc[j].ff;
        if(temp == k) {
            cout << vc[i].ss << sp << vc[j].ss;
            flag = 1;   break;
        }
        if(temp > k) j--;
        if(temp < k) i++;
    }
    if(!flag) cout << "IMPOSSIBLE" << endl;
    return 0;
}

