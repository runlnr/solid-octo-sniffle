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
void solve(int n) {
    vector<int> vc(n), a, b;
    int temp = -1, times = 1, sz = vc.size()-1;
    for(int i = 0; i < n; i++) cin >> vc[i];
    sort(vc.begin(), vc.end());

    for(int i = 0; i < n; i++) {
        if(vc[i] == temp) times++;
        else if(vc[i] != temp) {
            temp = vc[i];
            times = 1;
        }
        if(times % 2 != 0) a.pback(vc[i]);
        if(times % 2 == 0) b.pback(vc[i]);
    }

    for(int i = 0; i < vc.size(); i+=2) cout << vc[i] << sp;
    if(vc.size()%2==1) sz--;
    
    for(int i = sz; i >= 1; i-=2) cout << vc[i] << sp;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n;  cin >> n;
    solve(n);
    return 0;
}
