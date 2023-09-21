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
vector<int> vc;

const int MOD = 1e9+7, N = 1e5+7, J = 1e3+7;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t;  cin >> t;
    while(t--) {
        int a, x, cnt = 0;
    cin >> a;

    for(int i = 0; i < 3; i++) {
        cin >> x;
        if(x > a) cnt++;
    }
    cout << cnt << endl;
    }
}
