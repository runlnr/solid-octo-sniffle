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
void solve(int n, int a, int b) {
    int idx = a, targ = b, org = a;
    vector<int> step;

    if(a > b) {
        idx = n-a+1;    targ = n-b+1;
        org = idx;
    }
    if(abs(a-b) == 1) cout << 0 << endl;
    else {
        while(idx-2 >= 1) {
            idx -= 2;   step.pback(-2);
        }
        if(idx-1 == 1 || idx == 1) {
            if(idx-1 == 1) {idx--;  step.pback(-1);}
            else {idx++;    step.pback(1);}
        }
        while(idx-1 < org) {
            idx += 2;   step.pback(2);
        }
        while(idx+1 < targ) {
            idx++;      step.pback(1);
        }
        while(idx+2 <= n) {
            idx += 2;   step.pback(2);
        }
        if(idx == n || idx+1 == n) {
            if(idx+1 == n) {idx++;  step.pback(1);}
            else {idx--;    step.pback(-1);}
        }
        while(idx > targ) {
            idx -= 2;   step.pback(-2);
        }

        for(auto i : step) {
            if(a > b) cout << i*-1 << endl;
            else cout << i << endl;
        }
    }

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int n, a, b;    cin >> n >> a >> b;
    solve(n, a, b);
    return 0;
}
