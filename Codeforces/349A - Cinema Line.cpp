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
bool vis[N];
bool check(int n) {
    for(int i = 0; i < n; i++)
        if(!vis[i]) return 0;
    return 1;
}
void solve(int n) {
    map<int, int> mp;
    int p;
    bool flag = 1;

    for(int i = 0; flag && i < n; i++) {
        cin >> p;
        if(p == 25) mp[25]++;
        else if(p == 50) {
            mp[50]++;
            if(mp[25] == 0) flag = 0;
            mp[25]--;
        }
        else if(p == 100) {
            mp[100]++;
            if(mp[50] == 0) {
                if(mp[25] < 3) flag = 0;
                else mp[25] -= 3;
            }
            else if(mp[50] >= 1) {
                if(mp[25] == 0) flag = 0;
                else {mp[25]--;     mp[50]--;}
            }
        }
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;

}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n;  cin >> n;
    solve(n);
    return 0;
}
