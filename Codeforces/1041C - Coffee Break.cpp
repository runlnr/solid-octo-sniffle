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
vector<int> vc, order;
int n;

int bs(int x) {
    int l = 0, r = vc.size()-1, ans = n+1;
    while(l <= r) {
        int mid = l+(r-l)/2;
        if(vc[mid] >= x) {
            r = mid-1;  ans = mid;
        }
        else l = mid+1;
    }
    return ans;
}
void solve(int n, int m, int d) {
    vc.resize(n);
    order.resize(n);

    map<int, int> pos;
    int cnt = 1;

    for(int i = 0; i < n; i++) {
        cin >> vc[i];
        order[i] = vc[i];
    }
    sort(vc.begin(), vc.end());

    for(int i = 0; i < vc.size();) {
            int p = i;
            while(1) {
                pos[vc[p]] = cnt;
                int temp = bs(vc[p]+d+1);
                vc.erase(vc.begin()+p);
                if(temp == n+1) break;
                p = temp-1;
            }
            cnt++;

    }

    cout << cnt-1 << endl;
    for(auto i : order) cout << pos[i] << sp;

}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int m, d;    cin >> n >> m >> d;
    solve(n, m, d);
}
