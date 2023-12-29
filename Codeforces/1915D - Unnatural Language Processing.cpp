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
        int n;  cin >> n;
        vector<char> vc(n);

        for(int i = 0; i < n; i++) cin >> vc[i];
        for(int i = 0; i < n; i++) {
            if(i == 0 || i == n-1) cout << vc[i];
            else if(i > 0) {
                if(vc[i] == 'a' || vc[i] == 'e') cout << vc[i];
                else if (vc[i-1] == 'a' || vc[i-1] == 'e') {
                    if(vc[i+1] == 'b' || vc[i+1] == 'c' || vc[i+1] == 'd')
                        cout << vc[i] << '.';
                    else cout << '.' << vc[i];

                }
                else cout << vc[i];
            }
        }
        cout << endl;
    }
    return 0;
}
