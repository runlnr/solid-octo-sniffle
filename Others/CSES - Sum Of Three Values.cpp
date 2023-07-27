
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

    for(int i = 0; i < n; i++) {
        int p;  cin >> p;
        vc.pback({p, i+1});
    }
    sort(vc.begin(), vc.end());
    bool flag = 1;

    for(int i = 0; flag && i < n-2; i++) {
        int left = i+1, right = n-1;
        while(left < right) {
            int cur_ans = vc[i].ff + vc[left].ff + vc[right].ff;
            if(cur_ans > k) right--;
            if(cur_ans < k) left++;
            if(cur_ans == k) {
                flag = 0;
                cout << vc[i].ss << sp << vc[left].ss << sp << vc[right].ss << endl;
                break;
            }
        }
    }
    if(flag) cout << "IMPOSSIBLE" << endl;
    return 0;
}

