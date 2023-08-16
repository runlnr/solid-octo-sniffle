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
void solve(int n) {
    vector<int> exec(n), ans;
    vector<pair<int, int>> type;

    bool flag = 1;
    int idx = 0, temp;

    for(int i = 0; i < n; i++) {
        cin >> exec[i];
        if(exec[i] <= exec[i-1] && i > 0) flag = 0;
    }
    if(flag) cout << 0;
    else {
        int div = n+1, remain, incr;
        for(int i = n-1; i >= 0; i--) {
            remain = exec[i]%div;
            if(remain != i+1) {
                if(remain > i+1)
                    incr = (div-remain)+i+1;
                else if(remain < i+1)
                    incr = (i+1)-remain;

                for(int j = i; j >= 0; j--) exec[j] += incr;
                type.pback({i+1, incr});
            }
        }

        cout << type.size()+1 << endl;
        for(int i = 0; i < type.size(); i++) {
            cout << 1 << sp;
            cout << type[i].ff << sp << type[i].ss << endl;
        }
        cout << 2 << sp << n << sp << div;
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n;  cin >> n;
    solve(n);
    return 0;
}
