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
bool vis[N];
map<int, int> mp;
void solve(int n, int k) {
    vector<char> vc(n), setd;
    bool vis[200] = {0}, flag = false;
    string s;

    for(int i = 0; i < n; i++) {
        cin >> vc[i];
        if(!vis[vc[i]]) {
            setd.pback(vc[i]);   vis[vc[i]] = true;
        }
    }
    sort(setd.begin(), setd.end());

    if(k > n) {
        for(int i = 0; i < n; i++) s += vc[i];
        while(k > n) {
            s += setd[0];   n++;
        }
    }
    else {
        for(int i = k-1; i >= 0; i--) {
            if(flag) s = vc[i] + s;
            else {
                int l = lower_bound(setd.begin(), setd.end(), vc[i]) - setd.begin();
                int temp = l+1;

                if(temp < setd.size()) {
                    flag = true;    s = setd[temp]+s;
                }
                else if(temp == setd.size()) s = setd[0]+s;
            }
        }
    }
    cout << s << endl;

}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n, k;   cin >> n >> k;
    solve(n, k);
    return 0;
}
