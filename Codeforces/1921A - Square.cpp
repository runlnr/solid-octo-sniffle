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
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);     cout.tie(0);

    int t;  cin >> t;
    while(t--) {
        int a, b, a2, b2, z, x;
        ll side = 0;
        cin >> a >> b;

        for(int i = 0; i < 3; i++) {
            cin >> z >> x;
            if(z == a) {
                a2 = z;     b2 = x;
            }
        }
        side = abs(b2-b);
        cout << side*side << endl;
    }
    return 0;
}
