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
void solve(int a, int b, str s, str x) {
    str p;
    int cnt = 0, k = 0;
    bool keep = true;
    while(a < b) {
        int temp = s.size();
        a += temp;  p = s;  cnt++;
        s += p;
    }

    while(k != 2 && keep) {
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == x[0]) {
                bool flag = true;
                for(int j = 0; j < x.size(); j++)
                    if(x[j] != s[i+j]) {
                        //i = i+j-1;
                        flag = false;
                        break;
                    }

                if(flag) {
                    keep = false;   cnt += k;
                    break;
                }
            }
        }

        if(keep) {
            k++;    p = s;  s += p;
        }
    }

    if(keep) cnt = -1;
    cout << cnt;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t, a, b;  cin >> t;
    str s, x;
    while(t--) {
        cin >> a >> b;
        cin >> s >> x;

        solve(a, b, s, x);
        cout << endl;
    }
}
